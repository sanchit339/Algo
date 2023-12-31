/**
 * @file Floor.cpp
 * @author Striver
 * @brief 
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int Floor(vector<int> v , int target){
        int low = 0 , high = v.size() - 1 , ans;
        while (low <= high){
            int mid = (low + high) >> 1;
            if(v[mid] <= target){
                ans = v[mid];
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};