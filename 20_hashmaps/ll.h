#include <iostream>
using namespace std;
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class Node{
public:
    int data;
    Node* next, *random;  
    // ctor1
    Node(int d){
        data = d;
        next = NULL;
    }
};

Node* createLL(){
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int x;
        cin >> x;
        if (x == -1) break;

        Node* curNode = new Node(x);
        if (head == NULL){
            // curNode is the first node of our list
            head = curNode;
            tail = curNode;
        }
        else{
            tail->next = curNode;
            tail = tail->next;
        }
    }
    return head;
}

void display(Node* head){
    Node* cur = head;
    while(cur != NULL){                 // while(cur)
        cout << cur->data << "-->";
        cur = cur->next;
    }
}
#endif