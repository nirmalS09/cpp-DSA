#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int arr[100];
        int top;
        Stack(){
            top=-1;
        }
        void push(int x){
            if(top==99){
                cout<<"Overflow\n";
                return;
            }
            top++;
            arr[top]=x;
        }
        void pop(){
            if(top==-1){
                cout<<"Underflow\n";
                return;
            }
            top--;
        }
        int peek(){
            if(top==-1){
                return -1;
            }
            return arr[top];
        }
        bool empty(){
            return top==-1;
        }
};
int main(){
    Stack *st = new Stack();
    st->push(15);
    cout<<st->peek();

}