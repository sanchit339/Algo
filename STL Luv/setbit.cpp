#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}
int main(){
    printBinary(9);
    int a = 9;
    int i = 3; // ith bit is Setbit or Not 
    if(a && (1<<i)!=0){
        cout<<"set bit"<<endl;
    }else{
        cout<<"not set bit"<<endl;
    }
}
