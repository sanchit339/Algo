/*
    Check return condition
*/

#include<bits/stdc++.h>
using namespace std;

// s -> temp sum 

int subseqSUM(int idx , int arr[] , int n , int s , int sum){

    //extra base condition
    //if array contains positive only
    if(s > sum) return 0;
    set<int>st;
    
    // base case 
    if(idx == n){
        if(s == sum )
            return 1;
        return 0;
    }

    s += arr[idx];
    // fun call
    int l = subseqSUM(idx + 1 , arr , n , s , sum);

    // not add
    s -= arr[idx];
    int r = subseqSUM(idx + 1 , arr , n , s ,sum);

    return l + r; // to terminate recursion
}

int main(){
    int arr[] = {1 , 2 , 1};
    int n = 3;

    int reqSum = 2;
    
    cout << subseqSUM(0 , arr , n , 0 , reqSum);
}