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
class Stack{
    public:
        Node *top;
        Stack(){
            top = nullptr;
        }
        void push(int x){
            Node *temp = new Node(x);
            temp->next = top;
            top = temp;
        }
        void pop(){
            if(top==NULL) return;
            Node *del = top;
            top = top->next;
            delete top;
        }
        int peek(){
            if(top==NULL) return -1;
            return top->data;
        }
        bool isEmpty(){
            return top==NULL;
        }

};
int main(){
    Stack s;
    s.push(15);
    cout<<s.peek();

}