/*
    date :- 16/oct/2022
    implementation of binary search 
    finding the squareroot;
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //size,to_find 
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n/2;i++){
        int x = i;
        v.push_back(x);
    }
    for(auto i:v)cerr<<i<<" ";//    ---***---
    int lo = 0, hi = n-1; //indexing  
    while((hi-lo)>1) {
        int mid = (lo+hi)/2;
        cerr<<v[mid]<<endl;
        if(v[mid]*v[mid]<n){    //[---***---
        // if(mid*mid<n){
            lo = mid;// + 1; // traverse "start" from here
        }
        else{  // ">=" 
            hi = mid;
        }
    }
    cout<<v[hi]<<endl;
    // cout<<hi<<endl;
}

// TC O(logN) to the base 2 
