/**
 * @file 1_Merge_sort.cpp
 * @date 2023-07-30
 * 
 * @brief :
 *  Divide And Merge
 */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void merge(int arr[], int low , int mid , int high)
    {
         // Your code here
         // maintain a temp Vector
         vector<int>temp;
         // [low .... mid]
         // [mid + 1 ... high]
         int left = low , right = mid + 1;
         
         while(left <= mid && right <= high){
             if( arr[left] <= arr[right] ){
                 temp.push_back( arr[left] );
                 ++left;
             }
             else{
                 temp.push_back( arr[right] );
                 ++right;
             }
         }
         
         // put remaining
         while(left <= mid){
             temp.push_back(arr[left]);
             ++left;
         }
         while(right <= high){
             temp.push_back(arr[right]);
             right++;
         }
         
         for(int i = low ; i <= high ; ++i){
             arr[i] = temp[i - low];
         }
         
    }
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        // we will divide the code first
        
        // base case 
        if( l == r ) return;
        
        int mid = (l + r) / 2 ;
        
        // two call and one merge call
        
        mergeSort(arr , l , mid);
        mergeSort(arr , mid + 1, r);
        
        merge(arr , l , mid , r);
    }
};