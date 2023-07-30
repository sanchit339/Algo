#include<bits/stdc++.h>
using namespace std;
// int main(){
    // int arr[5]={1,2,3,4,5};
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
void printVec(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //vector of array
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        // size of array 
        int n;
        cin>>n;
        for(int j=0;j<n;j++){ // j
            int x;
            cin>>x;
            // cout<<x<<endl;
            // for ith array
            v[i].push_back(x);
        }
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    cout<<"the new vector of array : - "<<endl;
    for(int i = 0;i<N;i++){
        printVec(v[i]);
    }
}
   
// sort function