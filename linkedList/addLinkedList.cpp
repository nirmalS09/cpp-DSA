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
Node *addLast(Node *head, int ele){
    Node *temp = new Node(ele);
    Node *mover = head;
    if(head==NULL) return temp;
    while(mover->next != NULL) mover = mover->next;
    mover->next = temp;
    mover = temp;
    return head;
}
Node *insertAtKth(Node *head, int k,int ele){
    Node *temp = new Node(ele);
    
    if(head ==NULL){
        if(k==1) return temp;
        else return head;
    }
    if(k==1){
        temp->next = head;
        return temp;
    }

    int count = 0;
    Node *mover = head;
    while(mover){
        count++;
        if(count==k-1){
            temp->next = mover->next;
            mover->next = temp;
            break;         
        }
        mover = mover->next;
    }
    
    return head;

}
Node *insertBeforeX(Node *head, int x, int ele){
    if(head==NULL) return head;
    Node *data = new Node(ele);
    if(head->data == x){
        data->next = head;
        return data;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        if(temp->next->data == x){
            data->next = temp->next;
            temp->next = data;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {4,2,6,8,4,9,5};
    Node *head = convertToArr(arr);
    printLL(head);
    // head = addStarting(head, 7);
    // printLL(head);
    // head = addLast(head, 7);
    // printLL(head);
    // head = insertAtKth(head, 45,10);
    // printLL(head);
    head = insertBeforeX(head, 5,10);
    printLL(head);
}