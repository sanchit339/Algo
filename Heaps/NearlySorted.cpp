/**
 * @file NearlySorted.cpp
 * @author Aditya Verma
 * @brief > Position of Element ranges from (i - k) to (i + k)
 * @version 0.1
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector <int> nearlySorted(int arr[], int num, int K){
        vector<int> ans;
        priority_queue<int , vector<int> , greater<int>> mq;
        for(int i = 0 ; i < num ; i++){
            mq.push(arr[i]);
            if(mq.size() == K + 1){
                ans.push_back(mq.top());
                mq.pop();
            }
        }
        while(!mq.empty()){
            ans.push_back(mq.top());
            mq.pop();
        }
        return ans;
    }
};