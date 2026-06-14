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
Node *convertToArr(vector<int> arr){
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
Node *addStarting(Node *head, int ele){
    Node *temp = new Node(ele, head);
    return temp;

}
int main(){
    vector<int> arr = {4,2,6,8,4,9,5};
    Node *head = convertToArr(arr);
    printLL(head);
    head = addStarting(head, 7);
    printLL(head);
}