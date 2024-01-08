/**
 * @file CircularQueue.cpp
 * @author Love babbar
 * 
 * @brief Circular Queue Implmentation
 * 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int * arr;
    int front;
    int rear;
    int size;

    CircularQueue(){
        int size = 1001;
        arr = new int[size];
        int front = -1;
        int rear = -1;
    }

    void enQueue(int data){
        if((front == 0 && rear == size - 1) || (rear = (front - 1) % (size - 1))){
            cout << "Queue is Full" << endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size - 1 && front != -1){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = data;
    }

    int deQueue(){          //returning number removed
        if(front == -1){
            cout << "empty Queue" << endl;
            return;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(front == size - 1){ // deleting elements it went at the end
            front = 0; // to maintain cyclic nature
        }
        else{
            front++; // only one thing
        }
        return ans;
    }
};