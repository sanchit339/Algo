/**
 * @file ddeQueue.cpp
 * @author Love Babbar
 * 
 * @brief Push And Pop Operations from both the end
 * 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class deQueue{
    int * arr;
    int front;
    int rear;
    int size;

    deQueue(){
        size = 10001;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push_front(int data){ // from left size
        if((front == 0 && rear == size - 1) || (rear =  (front - 1)%(size - 1))){
            cout << "Queue is Full " << endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0){
            front = size - 1; // maintain cyclic nature
        }
        else{
            front--;
        }
        arr[front] = data;
    }

    void push_rear(int data){
        if((front == 0 && rear == size - 1) || (rear =  (front - 1)%(size - 1))){
            cout << "Queue is Full " << endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if((rear == size - 1) && (front != 0)){
            rear = 0;
        }
        else rear++;

        arr[rear] = data;
    }
    
    
};