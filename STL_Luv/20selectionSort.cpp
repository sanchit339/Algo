// insertion Sort 

/*
    TC = n^2
    selects the min element and adds to the the array
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];// = {1,3,54,25,7,3,2};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int Index = i;
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[Index]){
                Index = j; // just like finding the min ele...
            }
        }
        swap(arr[i],arr[Index]);
    }
    for(auto i:arr)cout<<i<<" ";
}
