/**
 * @file KthLargestElement.cpp
 * @author Striver
 * @brief > if(size > k) pop ; return top
 * @version 0.1
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int>> pq; // min heap

        for(int i = 0 ; i < nums.size() ; i++){
            pq.push(nums[i]);
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};