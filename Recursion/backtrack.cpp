/*
    print N to 1 using backtracing
*/

#include<bits/stdc++.h>
using namespace std;

void printN(int i , int n){
    if(i > n)
        return;
    
    printN(i + 1 , n);
    cout << i << endl;
}

int main(){
    int n = 5;
    printN(1 , n);
}