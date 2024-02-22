#include<bits/stdc++.h>
using namespace std;


int solve(vector<int> &v , int low , int high , int target){
    if(low > high){
        return -1;
    }
    int mid = (low + high) >> 1;

    if(v[mid] == target){
        return mid;
    }
    else if(target > v[mid]){
        return solve(v , mid + 1 , high , target);
    }
    return solve(v , low , mid - 1 , target);
}

int main(){
    vector<int> v = {5 , 2 ,6 , 1, 4, 1,  7, 8 ,9};
    sort(v.begin() , v.end());
    int low = 0 , high = v.size() - 1 , target = 9;
    cout << solve(v , low , high , target);
}