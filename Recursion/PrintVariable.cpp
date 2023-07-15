#include<bits/stdc++.h>
using namespace std;

int sum(){
    return 0;
}

template<typename... T>
int sum(int a , T... args){
    return a + sum(args...);
}

void print(){
    cout << "\n empty string" << endl;
}
template<typename T , typename... args>
void print(T var1 , args... var2){
    cout << var1 << " ";
    print(var2...);
}

int main(){
    // cout << sum(1 ,2 ,3 ,4 ,5 ,6 ,7);
    // print(1 ,2 , 4 , "this is fun to print any thing" , 2.43);

    print(1 ,2 , 3 , "this fun " , "print anything" , 2.3343);
}