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
Node *deleteKTHelement(Node *head, int k){
    if(head==NULL) return head;

    Node *temp = head;
    int count = 0;
    while(temp){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    if(temp==NULL) return head;
    Node *front = temp->next;
    Node *prev = temp->back;
    if(front==NULL && prev == NULL){
        delete temp;
        return nullptr;
    }
    else if(front==NULL){
        //DELETE TAIL
        prev->next =NULL;
        delete temp;
        return head;
    }
    else if(prev==NULL){
        //delete head
        head = head->next;
        delete temp;
        head->back = nullptr;
        return head;
    }
    front->back = prev;
    prev->next = front;
    delete temp;
    return head;
}
Node *deleteNode(Node *head, int ele){
    if(head==NULL) return head;
    Node *temp = head;
    while(temp){
        if(temp->data == ele) break;
        temp=temp->next;
    }
    if(temp==NULL) return head;
    Node *prev = temp->back;
    Node *front = temp->next;
    if(front ==NULL && prev==NULL){
        delete temp;
        return nullptr;
    }
    else if(front==NULL){
        //delete tail
        prev->next=NULL;
        delete temp;
        return head;        
    }
    else if(prev==NULL){
        //delete head
        head=head->next;
        delete temp;
        head->back = NULL;
        return head;
    }
    prev->next = front;
    front->back = prev;
    delete temp;
    return head;
}
int main(){
    vector<int> arr={4,3,6,2,8,6};
    // vector<int> arr={4};
    Node *head = converArrToDL(arr);

    printDLL(head);
    // head = deleteHead(head);
    // head = deleteEnd(head);
    // head = deleteKTHelement(head,0);
    head = deleteNode(head, 0);
    printDLL(head);
}