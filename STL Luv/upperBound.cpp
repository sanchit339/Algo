#include<bits/stdc++.h>
using namespace std; 

int upper_bond(vector<int>v , int target){
    int n = v.size();
    int lo = 0, hi = n-1; //indexing  
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid] >= target){
            ans = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
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

    cout << upper_bond(v,to_find)+1;
}