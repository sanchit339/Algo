/**
 * @file MinTheMaxGasDist.cpp
 * @author Striver
 * @brief > Min the Max Difference
 * @version 0.1
 * @date 2023-09-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int check(vector<int> &arr , long double dist){
        int cnt = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            int numberInBetween = ((arr[i] - arr[ i - 1 ]) / dist);
            if(((arr[i] - arr[ i - 1 ]) / dist) == numberInBetween * dist){
                numberInBetween--; // if 1 - 13 and dist 4 we get 3 posi and we can place 2 stations
            }
            cnt += numberInBetween;
        }
        return cnt;
    }
public:
    double findSmallestMaxDist(vector<int> &stations, int k){
        long double low = 0 , high = 0;

        for(int i = 0 ; i < stations.size() - 1 ; i++){
            high = max(high , (long double)(stations[i + 1] - stations[i]));
        }

        long double diff = 1e-6;
        while( high - low > diff){
            long double mid = (low + high) / 2.0;
            int cnt = check( stations , mid );
            if(cnt > k){
                low = mid; // -1 coz it will eliminate lots of number between them
            }
            else high = mid;
        }
        return high;
    }
};