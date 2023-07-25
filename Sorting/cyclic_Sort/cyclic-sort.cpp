#include <bits/stdc++.h>
using namespace std;

void cyclic_sort(int arr[] , int n){

    int i = 0;
    while( i < n){
        int correct = arr[i] - 1;
        if(arr[i] != arr[correct]){
            swap(arr[i] , arr[correct]);
        }
        else{
            ++i;
        }
    }
}

int main(){
    int n = 5;
    int arr[5] = {5 , 3, 2, 4 ,1};
    
    cyclic_sort(arr , n);
    
    for(auto i : arr){
        cout << i << " ";
    }
}