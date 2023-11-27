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
    void mergeSort(int arr[], int l, int r) // direct index are given no need to modify
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


class sol{
    public:
        void merge1(vector<int> v , int low , int mid , int high){
            vector<int> temp;
            int left = low , right = mid + 1;
            while (left <= mid && right <= high){
                if(v[left] <= v[right]){
                    temp.push_back(v[left++]);
                }
                else temp.push_back(v[right++]);
            }

            while(left <= mid){
                temp.push_back(v[left++]);
            }
            while(right <= high){
                temp.push_back(v[right++]);
            }
            for(int i = low ; i <= high ; i++){
                v[i] = temp[i - low]; // from where it is sorted 
            }
            
        }
    public:
    void sort(vector<int>v , int l , int h){

        if( l == h) return;

        int mid  = (l + h ) / 2;

        sort(v , l , mid);
        sort(v , mid , h);

        merge1(v , l , mid , h);
    }
};