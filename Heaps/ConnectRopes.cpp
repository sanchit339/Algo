/**
 * @file MergeStones.cpp
 * @author Aditya Verma ()
 * @brief 
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
    long long minCost(long long arr[], long long n) {
        priority_queue<int, vector<int> , greater<int> > pq;
        for(int i = 0 ; i < n ; i++){
            pq.push(arr[i]);
        }
        long long int cost = 0;
        while(pq.size() >= 2){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();

            cost = cost + first + second;
            pq.push(first + second);
        }
        return cost;
    }
};