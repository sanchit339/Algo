/*
    date :- 15/oct/2022 got actual implementation after erricto and kunal PS. 2 feb 2023
*/

// implementation of binary search 

#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>v , int target){
    int n = v.size();
    int lo = 0, hi = n-1; //indexing  
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid] == target){
            return lo;
        }
        else if(v[mid] < target){
            lo = mid + 1; // traverse "start" from here
        }             
        else{  // ">=" 
            hi = mid - 1;
        }
    }
    return hi;
}

int main(){
    int n,to_find; //size,to_find 
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    cin>>to_find;

    cout << binary_search(v,to_find);
    
}

// TC O(logN) to the base 2 
// to stop overflow  === l + (h-l)/2
