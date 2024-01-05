#include<iostream>
using namespace std;

/**
 * @brief Problem of @a dangling_pointers can happen in dynamic memeory allocation
 * pointers that do not point to a valid object of the appropriate type.
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

// struct based implementation
struct linkedlist{
    int data;
    linkedlist *next;

    linkedlist(int val){
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

void traverseLinkedList(linkedlist * &head){
    while (head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

void traverseLinkedListClass(node * &head){
    while (head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    // implemented both the methods
    node * one = new node(221); 
    node two = node(51);
    one->next = &two;

    node* head = one;
    node* tail = &two;

    insetAtTail(tail , 50);
    insetAtHead(head , 75);
    traverseLinkedListClass(head);

    // head is down ->
    linkedlist list1(21);
    linkedlist list2(23);
    linkedlist list3(22);

    list1.next = &list2;
    list2.next = &list3;

    linkedlist *list = &list1; // head 
    while (list != NULL){
        cout << list->data << " ";
        list = list -> next;
    }
    
}

/**
 * @brief In modern C++, it's often recommended to use smart pointers
 *  like std::unique_ptr or std::shared_ptr instead of raw pointers,
 *  as they help manage memory automatically 
 *  and reduce the chances of @a Memory_leaks.
 */