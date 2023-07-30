// next greter element in an array 
#include<bits/stdc++.h>
using namespace std;

// unoptimize solution

// int main(){
//     int arr[6]={1,5,7,25,8,9};
//     for(int i=0;i<6;i++){
//         for(int j=i;j<6;j++){
//             if(arr[i]<arr[j]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//             else{
//                 cout<<-1<<" ";
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// optimize solution using stack


vector<int> NGE(vector<int>v){
    vector<int> nge (v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]>v[st.top()]){
            nge[st.top()]=i; // direct value is assigned to i   
            st.pop(); // pop the smaller than element 
        }
        st.push(i); // stack of indexex has been created
    }
    while (!st.empty()){
        nge[st.top()] = -1; // for all the remaining elements which do not have NGE 
        st.pop(); // pop that element :)  // and emptying the stack to get the remaining elements for assigning -1 to the
    }
    return nge;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> nge = NGE(v); 
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<<(nge[i] == -1 ? -1 : v[nge[i]])<< endl; // nge has the index which is NGE 
    }
    // int array 
} 