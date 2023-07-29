#include<iostream>
using namespace std;

void sum(int n , int x){
    if(n == 0){
        cout << x ;
        return;
    }

    sum(n - 1 , x + n);
}

int sumF(int x){
    if(x==0)
        return 0;
    
    return x + sumF(x - 1);
}

int main(){
    int x = 10;
    //parameter Way
    sum(x , 0);

    cout << "\n";
    
    //functional way
    cout << sumF(x);
}