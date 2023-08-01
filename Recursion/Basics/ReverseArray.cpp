#include<iostream>
using namespace std;

void Reverse(int arr[] , int i , int j){
    if(i >= j) return;
    swap(arr[i] , arr[j]);
    Reverse(arr , i + 1 , j - 1);
}

void Reverse2(int arr[] , int i , int n){
    if(i >= n / 2) return;
    swap(arr[i] , arr[n - i - 1]);
    Reverse2(arr , i + 1 , n);
}

int main(){
    int arr[6] = {1 , 2 , 3 , 4 , 5 , 6};
    Reverse2(arr , 0 , 6);  // pass actual size

    Reverse(arr , 0 , 5); // size - 1 

    for(auto i:arr) cout << i << " ";
}