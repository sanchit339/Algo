/*
    date 15/oct/2022
    lower bond and upper bond
*/

/*
    return  {pointer in array}
    return  {iterator in vector}

    lower bound return that element or grater than that 
    upper bound return upper element than that

    arr[i] <= x upper bound
    arr[i] < x lower bound

    lower bound >= x {the first element >= x}
    upper bound > x {the first element}
*/

#include<bits/stdc++.h>
using namespace std;

// just like implementation of lower bound

int lower_bond(vector<int>v , int target){
    int lo = 0, hi = v.size() - 1;
    while( (hi-lo) > 1){
        int mid = lo + (hi - lo)/2;
        if( v[mid] <= target ){
            lo = mid  + 1;
        } else{
            hi = mid;
        }
    }

    if(v[lo] >= target) return lo;
    if(v[hi] >= target) return hi;
}

int main(){
    vector<int>v = {2 , 3 , 5, 9, 11, 14 , 16, 18};
    int x ; cin >> x;
    int ans = lower_bond(v,x);
    cout << v[ans] << endl;
}