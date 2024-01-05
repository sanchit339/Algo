#include<iostream>
using namespace std;

/**
 * @brief Covered here
 *  Middle Of Linked List
 *  Reverse Of linked List
 */
// class based implementation
class node{
public:
    int data;
    node *next;

    // constructor (only)
    node(int val){
        data = val;
        next = nullptr;
    }
};

void insetAtHead(node* &head , int data){
    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;
}

void insetAtTail(node* &tail , int data){
    node* newNode = new node(data);
    tail -> next = newNode;
    tail = newNode;
}

void traverseLinkedListClass(node * &head){
    while (head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}


int middleElement(node * &head){
    node * slow = head;
    node * fast = head;
    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }   
    return slow -> data;
}

void DeleteNode(node * &head , int data){
    node * prev = nullptr;
    node * curr = head;
    while(curr != NULL && curr -> data != data ){
        prev = curr;
        curr = curr -> next;
    }
    if(curr == NULL) cout << "Not Found " << endl;
    prev -> next = curr -> next;
    delete curr;
}

node * reverseLinkedList(node * &head){
    node * prev = NULL;
    node * current = head;
    node * nextNode = NULL;

    while(current != NULL){
        nextNode = current -> next;  // Save the next node
        current -> next = prev;      // Reverse the link
        prev = current;              // Move one step forward in the list
        current = nextNode;          // Move one step forward in the list
    }
    return prev; // as curr will go to NULL
}

int main(){
    // implemented both the methods
    node * one = new node(221); 
    node two = node(51);
    one->next = &two;

    node* head = one;
    node* tail = &two;

    insetAtTail(tail , 50);
    insetAtTail(tail , 51);
    insetAtTail(tail , 54);
    insetAtTail(tail , 55);
    insetAtTail(tail , 56);
    insetAtTail(tail , 57);
    insetAtTail(tail , 58);

    DeleteNode(head , 58);
    traverseLinkedListClass(head);
    // cout << middleElement(head);
}
