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
            data = data1;
            next = nullptr;
            back = nullptr;
        }
};
Node *converArrToDL(vector<int> &arr){
    if(arr.empty()) return nullptr;
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
Node *deleteHead(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
Node *deleteEnd(Node *head){
    if(head==NULL) return head;
    if(head->next==NULL){
        delete head;
        return nullptr;
    }
    Node *temp = head;
    while(temp->next->next) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
    return head;
}
Node *deleteKTHelement(Node *head){
    
}
int main(){
    vector<int> arr={4,3,6,2,8,6};
    Node *head = converArrToDL(arr);

    printDLL(head);
    head = deleteHead(head);
    // head = deleteEnd(head);
    printDLL(head);
}