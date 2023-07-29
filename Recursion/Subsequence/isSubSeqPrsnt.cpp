/*
    if you found the sub return true
    Add -> sum also add
    Remove -> sum also remove
*/

#include<bits/stdc++.h>
using namespace std;

// s -> temp sum 

bool subseqSUM(int idx , vector<int> &temp , int arr[] , int n , int s , int sum){

    // base case 
    if(idx == n){
        if(s == sum ){
            for(auto it : temp)
                cout << it << " ";
            cout << endl;

            return true;
        }
        return false;
    }

    // to add , to not add
    temp.push_back(arr[idx]);
    s += arr[idx];
    // fun call
    if(subseqSUM(idx + 1 , temp , arr , n , s , sum) == true) return true;

    // not add
    s -= arr[idx];
    temp.pop_back();
    if(subseqSUM(idx + 1 , temp , arr , n , s ,sum) == true) return true;

    return false; // no subseq false
}

int main(){
    int arr[] = {1 , 2 , 1};
    int n = 3;
   
    vector<int>temp;
    int reqSum = 2;
    
    subseqSUM(0 , temp , arr , n , 0 , reqSum);
}