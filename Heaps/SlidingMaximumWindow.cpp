/**
 * @file SlidingMaximumWindow.cpp
 * @author Tech Dose (https://leetcode.com/problems/sliding-window-maximum/description/)
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief > Insert The Element 
 *  POP THE TOP IF its Out Of index
 *  Insert the element from the back until its Greater than Elements in the Deque
 *  Push Store it IN the vector
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<pair<int,int>>dq;
        vector<int> ans;

        for(int i = 0 ; i < nums.size() ; i++){
            while(!dq.empty() && dq.front().second <= (i - k)){
                dq.pop_front();
            }
            while(!dq.empty() && dq.back().first < nums[i]){
                dq.pop_back();
            }
            // Now Insert the Element
            dq.push_back({nums[i] , i});
            if(i >= (k - 1)){
                ans.push_back(dq.front().first);
            }
        }
        return ans;
    }
};
