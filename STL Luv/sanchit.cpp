#include<bits/stdc++.h>
using namespace std;
int main(){
    // int t;
    // cin>>t;
    // while(t--){
    
    // to get celi value
    
    // (a+b-1)/b; // upper bond
    
    
        int n,m;
        cin>>n>>m;
        std::vector<int> v;
        // for(auto &i:v){
        //     cin>>i;
        // }
        // for(int i:v){
        //     cout<<i<<endl;
        // }
        int sum = 0;
        // int countAns = 0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum = sum + arr[i];
        }
        // cout<<sum<<endl;
        if(sum<=m){
            // cout<<0<<endl;
            sort(arr,arr+n,greater<int>());
            for(int i=0;i<n;i++){
            int celi = (m+arr[i])/arr[i];
            v.push_back(celi);
            }
            int sumForAns = 0;
            int count = 0;
            // // while(sumForAns<n){
            for(int i=0;i<n;i++){
                if(sumForAns>n){
                    // cout<<sumForAns-v[i-1]<<endl;
                    // cout<<n-i-2<<endl;
                    cout<<count-1<<endl;
                    break;
                }
                sumForAns = sumForAns + v[i];
                cout<<sumForAns<<endl;
                count++;
            }
            for(int i:v){
            cout<<i<<" ";
            }
            cout<<endl;
        }
        
        // else if (sum==m)
        // {
        //     cout<<1<<endl;
        // }
        
        else{
        sort(arr,arr+n,greater<int>());
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++){
            int celi = (m+arr[i])/arr[i];
            v.push_back(celi);
        }
        int sumForAns = 0;
        int count = 0;
        // // while(sumForAns<n){
            for(int i=0;i<n;i++){
                if(sumForAns>n){
                    // cout<<sumForAns-v[i-1]<<endl;
                    // cout<<n-i-2<<endl;
                    cout<<count-1<<endl;
                    break;
                }
                sumForAns = sumForAns + v[i];
                count++;
            }
        // // } 
        // cout<<sumForAns<<endl;
        // cout<<count<<endl;
        // for(int i:v){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        }
    // }
    return 0;
}