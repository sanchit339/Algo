#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {11  , 25 , 12 , 22 , 64 , 89};
    
    // select min push to list / swap
    
    for(int i = 0 ; i < n ; ++i){
        int minIdx = i;
        for(int j = i + 1 ; j < n ; ++j){
            if(arr[minIdx] > arr[j]){
                minIdx = j ;
            }
        }
        swap(arr[i] , arr[minIdx]);
    }

    for(auto it : arr){
        cout << it << " " ;
    }
}