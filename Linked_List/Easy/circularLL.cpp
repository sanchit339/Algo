#include<bits/stdc++.h>
using namespace std;

/**
 * @brief No Need Of head only tail is 
 */

class Node{
public:
    int data;
    Node * next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int data = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memeory Relesed for " << data << endl;
    }
};

void InsertNode(Node * &tail , int element , int data){
    // Empty List
    if(tail == NULL){
        Node * newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node * curr = tail;

        // insert at any element
        while(curr -> data != element){
            curr = curr -> next;
        }
        // element found
        Node * newNode = new Node(data);
        newNode -> next = curr -> next;
        curr -> next = newNode;
    }
}

void deleteNode(Node * &tail , int val){
    if(tail == NULL){
        cout << "Empty List" << endl;
        return;
    }
    else{
        Node * prev = tail;
        Node * curr = prev -> next;

        while(curr -> data != val){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
 
        if(prev == curr){
            tail = NULL;
        }

        // 2 nodes
        else if(tail == curr){
            tail = prev;
        }
        
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node * &tail){
    Node * temp = tail;
    if(temp == NULL){
        cout << " Empty List " << endl;
        return;
    }
    do{
        cout << tail -> data << " " ;
        tail = tail -> next;
    }while (temp != tail);
    
    cout << endl;
}

int main(){
    Node * tail = NULL;

    InsertNode(tail , 32 , 12);
    // InsertNode(tail , 12 , 22);
    // InsertNode(tail , 22 , 32);
    // InsertNode(tail , 12 , 32); 

    deleteNode(tail , 12);
    print(tail);
}