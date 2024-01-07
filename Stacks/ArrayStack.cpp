/**
 * @file ArrayStack.cpp
 * @author Love Babbar
 * @brief 
 * @version 0.1
 * @date 2023-09-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << " Stack OverFlow " << endl;
        }
    }

    void pop(int element){
        if(top >= 0){
            top--;
        }
        else{
            cout << " Stack UnerFlow " << endl;
        }
    }

    int peek( ){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout << " stack is Empty " << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1)
            return true;

        else return false;
    }

};

int main(){
    int *arr = new int[5];
    // for(auto it : arr) cout << it << " ";  unInitialized so range based can give undifined behaviour
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
}