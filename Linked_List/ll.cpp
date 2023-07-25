#include <bits/stdc++.h>
using namespace std;


struct Node {
     int val;
     Node *next;
     Node(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if (!head || !head->next)
            return;

        Node* slow = head;
        Node* fast = head;

        // Detect loop using Floyd's cycle detection algorithm.
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                break;
        }

        if( slow != fast || slow == NULL || fast == NULL) 
            return;

        // Find the start of the loop.
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        Node* p = slow->next; //loop back the circle again
        while(p->next != slow)
            p = p->next;
        p->next = NULL;
    }
};