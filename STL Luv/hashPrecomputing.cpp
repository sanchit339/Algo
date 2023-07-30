/*
Given an array of n integer ,, and given Q queries
and in each query given a number N  print the occurance 
in the array.

constriants
1<=N<=10^5
a[i]<=10^7
q<=10^5
*/


//here hash array is precomputed coz of time error

#include<bits/stdc++.h>
using namespace std;
const int M = 1e7+10;
int hsh[M];

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++; // arr[i] acts as the index to the hsh array
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
}

// TC = O(N)+O(Q) ie: ~=2*10^5;

