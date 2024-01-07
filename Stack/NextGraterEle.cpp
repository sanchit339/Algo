/**
 * @file NextGraterEle.cpp
 * @author Love Babbar
 * 
 * @brief Question is Similar to Next Greater Element
 * 
 * @version 0.1
 * @date 2024-01-07
 * 
 * @copyright Copyright Sanchit(c) 2024
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> temp ;
        temp.push(-1);

        vector<int> ans;

        for(int i = prices.size() - 1 ; i >= 0 ; --i){
            int curr = prices[i];

            while(st.top() >= curr)
        } 
    }
};