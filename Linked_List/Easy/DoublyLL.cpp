#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node * prev;
    Node * next;

    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int data = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << " Memory Released for data : " << data << endl;  
    }
};

/**
 * @brief Insert at head
 */

void insertAtHead(Node * &head , Node * &tail , int data){

    if(head == NULL){
        Node * temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node * temp = new Node(data);

        temp -> next = head;
        head -> prev = temp;    
        head = temp;
    }
}

void insertAtTail(Node * &head, Node * &tail , int data){
    if(tail == NULL){
        Node * temp = new Node(data);
        head = temp;
        tail = temp;
    }
    Node * temp = new Node(data);

    tail -> next = temp;
    temp -> prev = tail;

    tail = temp;
}

void insertAtPosition(Node * &head , Node * &tail , int data , int posi){
    if(posi == 1){
        insertAtHead(head , tail , data);
        return;
    }    

    Node * temp = head;
    int cnt = 1;

    while(cnt < posi - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail( head , tail , data);
        return;
    }

    Node * nodeToInsert = new Node(data);

    // take operations from front

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
    
}

/**
 * @brief Deletion
 */

void deletion(Node * &head , Node * &tail , int posi){
    if(posi == 1){
        Node * temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }
    else{
        Node * curr = head;
        Node * prev = NULL;

        int cnt = 1;
        while(cnt < posi){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        if(curr -> next == NULL){
            prev -> next = NULL;
            tail = prev;
            delete curr;
            return;
        }
        
        curr -> next -> prev = prev;
        curr -> prev = NULL;
        prev -> next = curr -> next;

        curr -> next = NULL;
        delete curr;
    }
}

void print(Node * &head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node * &head){
    Node * temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

int main(){
 
    Node * node = new Node(10);
    Node * head = NULL;
    Node * tail = NULL;

    // Now head , tail are not defined / are NULL
    insertAtHead(head , tail , 40);
    insertAtTail(head , tail , 35);

    // Node * head = node;
    // Node * tail = node;
    // print(head);

    insertAtHead(head , tail , 20);
    insertAtHead(head , tail , 40);
    insertAtTail(head , tail , 35);
    insertAtTail(head , tail , 23);

    insertAtPosition(head , tail , 11 , 2);

    // deletion(head , tail , 1);
    cout << head -> data << " " << tail -> data << endl;
    deletion(head , tail , 7);
    cout << head -> data << " " << tail -> data << endl;


    print(head);

}