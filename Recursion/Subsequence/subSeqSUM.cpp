/*
 ADD not add 
 Add -> sum also add
 Remove -> sum also remove
*/

#include<bits/stdc++.h>
using namespace std;

// s -> temp sum 

void subseqSUM(int idx , vector<int> &temp , int arr[] , int n , int s , int sum){

    // base case 
    if(idx == n){
        
        if(s == sum ){
            for(auto it : temp)
                cout << it << " ";
            cout << "\n";
        }

        // return stupid return
        return;
    }

    // to add , to not add
    temp.push_back(arr[idx]);
    s += arr[idx];
    // fun call
    subseqSUM(idx + 1 , temp , arr , n , s , sum);

    // not add
    temp.pop_back();
    s -= arr[idx];
    subseqSUM(idx + 1 , temp , arr , n , s ,sum);
}

int main(){
    int arr[] = {1 , 2 , 1};
    int n = 3;
    vector<int>temp;
    int reqSum = 2;
    subseqSUM(0 , temp , arr , n , 0 , reqSum);
}