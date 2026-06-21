#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            next=nullptr;
        }
};

class Queue{
    public:
        Node *front, *rear;
        Queue(){
            front = nullptr;
            rear = nullptr;
        }
        void push(int x){
            Node *temp = new Node(x);
            if(front==NULL){
                front = temp;
                rear = temp;
                return;
            }
            rear->next = temp;
            rear = temp;

        }
        void pop(){
            if(front==NULL) return;
            Node *del = front;
            front=front->next;
            if(front==NULL) rear = nullptr;
            delete del;
        }
        int top(){
            if(front==NULL) return -1;
            return front->data;
        }
        bool isEmpty(){
            return front==NULL;
        }
};