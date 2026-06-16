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
Node *insertAtHead(Node *head,int ele){

    Node *temp = new Node(ele,head,nullptr);
    if(head) head->back=temp;
    return temp;
}
Node *insertAtEnd(Node *head, int ele){
    if(head==NULL){
        return new Node(ele,nullptr,nullptr);
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node *element = new Node(ele, nullptr, temp);
    temp->next=element;
    return head;
}
Node *insertBeforeKthNode(Node *head, int k, int ele){
    if(head==NULL && k!=1) return head;
    if(k==1) return insertAtHead(head,ele);
    Node *temp = head;
    int count = 0;
    while(temp){
        count++;
        if(count==k) break;
        temp = temp->next;
    }
    if(temp==NULL) return head;
    Node *element = new Node(ele, temp,temp->back);
    Node *prev = temp->back;
    prev->next = element;
    temp->back = element;
    return head;
}
Node *insertBeforeNode(Node *head, int value, int ele){
    if(head==NULL) return head;
    Node *temp = head;
    while(temp){
        if(temp->data == value) break;
        temp=temp->next;
    }
    if(temp==NULL) return head;
    if(temp==head) return insertAtHead(head,ele);
    Node *element = new Node(ele, temp,temp->back);
    Node *prev = temp->back;
    prev->next = element;
    temp->back = element;
    return head;

}
int main(){
    vector<int> arr={4,3,6,2,8,6};
    // vector<int> arr={4};
    Node *head = converArrToDL(arr);
    printDLL(head);
    head = insertBeforeNode(head,4,10);
    printDLL(head);
}