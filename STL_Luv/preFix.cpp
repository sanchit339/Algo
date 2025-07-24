#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int arr[N]; // All ele = 0;
int Pf[N]; // same here
int main(){
    int n;cin>>n;
    // int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        Pf[i]= Pf[i-1]+arr[i]; // here 0th index is 0;
    }
    for(auto i:Pf) cerr << i << " ";
    int q;cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<Pf[r]-Pf[l-1]<<endl;
    }
}

/*
6
3 6 2 8 9 2
4
2 3 
4 6
1 5
3 6
*/