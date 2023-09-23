/**
 * @file TopKFrequent.cpp
 * @author Aditya Verma (https://leetcode.com/problems/top-k-frequent-elements/)
 * @brief Create Map cal freq then use heap
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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }

        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int , int>> > pq;
        for(auto it : mp){
            pq.push({it.second , it.first});
            if(pq.size() == k + 1){
                pq.pop();
            }
        }

        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};