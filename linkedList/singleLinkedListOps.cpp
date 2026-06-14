#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data1,Node *next1){
            data = data1;
            next = next1;
        }
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};
Node *convertArrToLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;
}
void lengthOfLL(Node *head){
    Node *temp = head;
    int count=0;
    while(temp){
        temp=temp->next;
        count++;
    }
    cout<<count<<endl;

}
void printLL(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void isPresent(Node *head, int ele){
    Node *temp = head;
    bool present = false;
    while(temp){
        if(temp->data == ele){
            present = true;
            break;
        }        
        temp = temp->next;
    }
    if(present) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    
}

int main(){
    vector<int> arr={2,4,2,6,1,9,6};
    Node *head = convertArrToLL(arr);
    printLL(head);
    lengthOfLL(head);
    isPresent(head, 8);
    
    // cout<<head<<endl;
    // cout<<head->next<<endl;
    // cout<<head->data<<endl;
}