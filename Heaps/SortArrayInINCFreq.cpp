/**
 * @file SortArrayInINCFreq.cpp
 * @author Sanchit (https://leetcode.com/problems/sort-array-by-increasing-frequency/)
 * @brief 
 * @version 0.1
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool comp(pair<int,int> a , pair<int,int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.second < b.second;
}
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }

        vector<pair<int,int>> vp;
        for(auto it : mp){
            vp.push_back({it.first , it.second});
        }
        sort(vp.begin() , vp.end() , [this](pair<int,int> a, pair<int,int> b){ return comp(a , b); });
        
        vector<int> ans;
        for(auto it : vp){
            int freq = it.second , num = it.first;
            while(freq--){
                ans.push_back(num);
            }
        }   
        return ans;
    }
};