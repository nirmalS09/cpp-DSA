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
Node *reverse(Node *head){
    Node *current = head;
    Node *prev = NULL;
    while(current){  
        prev = current->back;      
        current->back = current->next;
        current->next = prev;
        current=current->back;
    }
    if(prev) return prev->back;
    return head;
    
}

int main(){
    vector<int> arr={4,3,6,2,8,6};
    // vector<int> arr={4};
    Node *head = converArrToDL(arr);

    printDLL(head);
    head = reverse(head);
    printDLL(head);
}