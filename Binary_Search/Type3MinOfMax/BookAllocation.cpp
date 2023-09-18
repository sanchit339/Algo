/**
 * @file BookAllocation.cpp
 * @author Striver (https://leetcode.com/problems/split-array-largest-sum/)
 * @brief Contiguious Is Very Important to get the unique answer
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int possible(vector<int>& nums, int sum){
        int students = 1;
        long long pageStudent = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(pageStudent + nums[i] > sum){
                students += 1;
                pageStudent = nums[i];
            }
            else{
                pageStudent += nums[i];
            }
        }
        return students;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end() , 0);
        while(low <= high){
            int mid = (low + high) >> 1;
            int check = possible(nums , mid );
            if(check > k){
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return low;
    }
};