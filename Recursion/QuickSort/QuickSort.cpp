/**
 * @file QuickSort.cpp
 * 
 * @author Striver Recursion
 * 
 * @brief TC (NLog(N)); SC (1);
 * @date 2023-07-30
 * 
 * 
 * @explanation
 *   take a poviot element
 *   place at the appropriate index
 *   call the recursive fun to solve the remining
 */

/**
 * @brief pivot explaination 
 *  low , high : i = low , j = high
 *  take outer loop 
 *  find just greater than pivot (i) 
 *  find just less than pivot (j)
 *  swap(i , j); 
 *  till outer loop you will get the pivot ele. at the currect posi
 */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        
        // base case 
        if(low < high){
            int pIdx = partition(arr , low , high);
            quickSort(arr , low , pIdx - 1);
            quickSort(arr , pIdx + 1 , high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       
       // base case 
       int pivot = arr[low];
       int i = low , j = high;
       
       while( i < j ){
           // move the pointer
           while( arr[i] <= pivot ) i++;
           while( arr[j] > pivot ) j--;
           
           if(i < j)
                swap(arr[i] , arr[j]);
       }
       // j has crossed the condition 
       swap(arr[low] , arr[j]);
       return j; // pidx
    }
};