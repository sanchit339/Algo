/**
 * @file Queue.cpp
 * @author Love Babbar
 * 
 * @brief Intro
 * 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int * arr;
    int front;
    int rear;
    int size = 10001;

    Queue(int data){
        arr = new int[data];
        this -> front = -1;
        this -> rear = -1;
    }

    void enQueue(int data){
        if(rear == size){
            cout << "Queue is Full" << endl;
        } 
        else{
            arr[rear] = data;
            rear++;
        }       
    }

    void deQueue(){
        if(front == rear){
            cout << "Stack is Empty" << endl;
            return;
        }
        else{
            arr[front] = -1;
            front++;
            // Optimization
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int qFront(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }
};