/**
 * @file NthSqrt.cpp
 * @author Striver
 * @brief 
 * @version 0.1
 * @date 2023-09-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
    int solve(int mid , int n , int m){
        long long ans = 1;
        for(int i = 1 ; i <= n ; i++){
            ans = ans * mid;
            if(ans > m) return 2;
        }
        if(ans == m) return 1;
        return 0;
    }
public:
	int NthRoot(int n, int m){
        int low = 1 , high = m;
        while(low <= high){
            int mid = (low + high) / 2;
            int fun = solve(mid , n ,  m);
            if(fun == 1) return mid;
            else if(fun == 0) return low = mid + 1;
            else high = mid - 1;
        }
        return -1;
	}  
};