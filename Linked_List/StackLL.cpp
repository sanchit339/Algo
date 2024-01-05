#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class stackLinkedList{
private:
    Node * top;

private:
    stackLinkedList(){
        top = NULL;
    }
    void push(int data){
        Node* temp = new Node(data);
        // push on head
        temp -> next = top;
        top = temp;
    }

    bool isEmpty(){
        return top == nullptr;
    }

    int pop(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return -1;
        } 

        int data  = top -> data;
        Node * temp = top;
        top = top -> next;
        delete top;
        return data;
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return top -> data;
    }
};

int main(){

}