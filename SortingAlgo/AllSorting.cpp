/**
 * @file insertionSort.cpp
 * @author Striver
 * 
 * @brief 
 * 
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void selectionSort(vector<int> &arr , int n){
        for(int i = 0 ; i < n - 1 ; i++){
            int mini = i;
            for(int j = i ; j < n ; j++){
                if(arr[j] < arr[mini]) mini = j;
            }
            swap(arr[i] , arr[mini]);
        }
    }
public:
    void BubbleSort(vector<int> &arr , int n){
        for(int i = n - 1 ; i >= 0 ; --i){
            int swapDone = 0;
            for(int j = 0 ; j <= i - 1 ; ++j){
                if(arr[i] < arr[j]){
                    swap(arr[i] , arr[j]);
                    swapDone = 1;
                }   
            }
            if(!swapDone) break;
        }
    }
public:
    void insertionSort(vector<int> &arr , int n){
        for(int i = 0 ; i < n ; ++i){
            int j = i;
            while(j > 0 && arr[j - 1] > arr[j]){
                swap(arr[j - 1] , arr[j]);
                j--;
            }
        }
    }
public:
    void printArr(vector<int> arr , int n){
        for(int i = 0 ; i < n ; i++){
            cout << arr[i] << " ";
        }
    }
};

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for(auto &it : arr) cin >> it;

    Solution ans;
    // ans.BubbleSort(arr , n);
    // ans.selectionSort(arr , n);
    ans.insertionSort(arr , n);
    ans.printArr(arr , n);
}