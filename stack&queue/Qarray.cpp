#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        int arr[100];
        int front,rear;
        Queue(){
            front = -1;
            rear = -1;
        }
        void push(int x){
            if(rear==99){
                cout<<"Overflow\n";
                return  ;
            }
            if(front==-1) front=0;
            rear++;
            arr[rear]=x;
        }
        void pop(){
            if(front==-1 || front>rear){
                cout<<"Underflow\n";
                return;
            }
            front++;
            if(front>rear){
                front,rear=-1;
            }
        }
        int top(){
            if(front==-1) return -1;
            return arr[front];
        }
        bool empty(){
            return front==-1;
        }
};
int main(){
    Queue q;
    q.push(34);
    cout<<q.top();
}