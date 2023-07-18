#include<iostream>
using namespace std;

class stack{
    // [ 1 ] properties
    public:
        int *arr;
        int top;
        int size;

    // [ 2 ] methods
    stack(int size)
    {
        this -> size = size;
        arr = new int[size]; // initilize array
        top = -1; // initially for empty array
    }

    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Empty stack" << endl;
            return -1;
        }
    }

    void pushpa(int element)
    {
        // check for size avaliable
        if(size - top > 1) // > 1 coz top++ in next step
        {
            top++;
            arr[top] = element; 
        }
        else 
        {
            cout << "Stack is full" << endl;
        }
    }

    void pop()
    {
        if(top > -1)
        {
            top--;
        }
        else
        {
            cout << "Empty array" << endl;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack st(5);
    st.pushpa(10);
    st.pushpa(20);
    cout << st.peek() << endl; // naming convention peek (coz top initialized)
    st.pop();
    st.pop();
    cout << st.peek() << endl;
}