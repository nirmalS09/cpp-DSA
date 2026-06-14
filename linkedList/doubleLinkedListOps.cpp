#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *back;
        Node(int data1, Node *next1, Node  *back1){
            data = data1;
            next = next1;
            back = back1;
        }
        Node(int data1){
            data = data;
            next = nullptr;
            back = nullptr;
        }
};
Node *converArrToDL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for(int i = 1; i<arr.size();i++){
        Node *temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev = temp;
    }
    return head;
}
void printDLL(Node *head){
    Node *mover = head;
    while(mover){
        cout<<mover->data<<" ";
        mover = mover->next;
    }
    cout<<endl;
}
int main(){
    vector<int> arr={4,2,6,5,9,1,7,8};
    Node *head = converArrToDL(arr);
    printDLL(head);
}