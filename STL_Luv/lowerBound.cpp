/*
    date :- 15/oct/2022 got actual implementation after erricto and kunal PS. 2 feb 2023
*/

// implementation of binary search 

#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>v , int target){
    int n = v.size();
    int lo = 0, hi = n-1; //indexing  
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid] >= target){
            hi = mid - 1;
            ans = mid;
        }       
        else{  
            lo = mid + 1; // traverse "start" from here
        }
    }
    return ans;
}

int main(){
    int n,to_find; //size,to_find 
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    cin>>to_find;

    cout << lower_bound(v,to_find)+1;
}

