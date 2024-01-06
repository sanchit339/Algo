#include<iostream>
using namespace std;

/**
 * @brief Problem of @a dangling_pointers can happen in dynamic memeory allocation
 * pointers that do not point to a valid object of the appropriate type.
 */


/**
 * @brief Creation
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

    ~node(){
        int data = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL; // for the constructor to Avoid Dangling Pointer
        }
        cout << "Memory Is Free for :" << data << endl;
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

/**
 * @brief Insertion (Update)
 */

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

void insertInMiddle(node * &head , int data , int posi){

    // handling cases
    // if insertion at first position
    if(posi == 1){
        insetAtHead(head , data);
        return;
    }

    posi -= 1;
    while(posi --){
        head = head -> next;
    }

    // if insertion at last position
    if(head -> next == NULL){
        insetAtTail(head , data);
        return;
    }
    node * temp;
    temp = head -> next;
    node * newnode = new node(data);
    head -> next = newnode;
    newnode -> next = temp;
}

/**
 * @brief Deletion (Posi , Value Check)
 * 
 * @a temp -> Next == Curr -> next (del curr)
 */

void deleteNode(int posi , node * &head , node * &tail){
    
    // delete from start
    if(posi == 1){
        node * temp = head;
        head = head -> next;
        temp -> next = NULL; // before deletion 
        delete temp;
        if (head == NULL) tail = NULL;
    }
    else{
        node * curr = head;
        node * prev = NULL;
        int cnt = 1;
        while (cnt < posi) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

        if(prev -> next == NULL){
            tail = prev;
        }
    }
}

/**
 * @brief Reading 
 */
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
    node * head = one;
    node * tail = one;
    insetAtTail(tail , 10);
    insetAtTail(tail , 90);
    insetAtTail(tail , 30);
    insetAtTail(tail , 70);
    insetAtTail(tail , 50);
    // node two = node(51);
    // one->next = &two;

    // node* head = one;
    // node* tail = &two;

    insetAtTail(tail , 50);
    insetAtHead(head , 75);
    // insertInMiddle(head , 89 , 1);
    // cout << head -> data << endl;
    cout << tail -> data << endl;
    
    deleteNode(8 , head , tail);
    deleteNode(7 , head , tail);
    traverseLinkedListClass(head);

    cout << tail -> data << endl;
    // // head is down ->
    // linkedlist list1(21);
    // linkedlist list2(23);
    // linkedlist list3(22);

    // list1.next = &list2;
    // list2.next = &list3;

    // linkedlist *list = &list1; // head 
    // while (list != NULL){
    //     cout << list->data << " ";
    //     list = list -> next;
    // }
    
}

/**
 * @brief In modern C++, it's often recommended to use smart pointers
 *  like std::unique_ptr or std::shared_ptr instead of raw pointers,
 *  as they help manage memory automatically 
 *  and reduce the chances of @a Memory_leaks.
 */