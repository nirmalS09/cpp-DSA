#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data1, Node *next1){
            data = data1;
            next = next1;
        }
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};
Node *convertToLL(vector<int> arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node *deleteHead(Node *head){
    if(head==NULL) return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deleteTail(Node *head){
    if(head == NULL || head->next == NULL) return head;
    Node *temp = head;
    while(temp->next->next!=NULL) temp = temp->next;
    delete temp->next;
    temp->next=nullptr;
    return head;
}

int main(){
    vector<int> arr = {3,6,2,4,8,6,9};
    Node *head = convertToLL(arr);
    printLL(head);
    head = deleteHead(head);
    cout<<head->data<<endl;
    // printLL(head);
    head = deleteTail(head);
    cout<<head->data<<endl;
    // printLL(head);
}