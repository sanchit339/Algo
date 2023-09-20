/**
 * @file MinDistanceGasStation.cpp
 * @author Striver
 * @brief > @nd Approch Using Heap
 *          > GFG Dont accept this solution
 * @version 0.1
 * @date 2023-09-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findSmallestMaxDist(vector<int> &stations, int k){
        int n = stations.size();
        vector<int> howMany(n - 1 , 0);
        priority_queue<pair<long double , int>> pq; // ele , idx

        for(int i = 0 ; i < n - 1 ; i++){
            pq.push({stations[i + 1] - stations[i] , i});
        }

        for(int i = 0 ; i < k ; i++){
            auto it = pq.top(); pq.pop();
            int secIdx = it.second;
            
            // start placing
            howMany[secIdx]++;
            //calculate
            long double indiff = (stations[secIdx + 1] - stations[secIdx]);
            long double newDiff = indiff / (long double)(howMany[secIdx] + 1);
            pq.push({newDiff , secIdx});
        }
        return pq.top().first;
    }
};