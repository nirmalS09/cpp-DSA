#include<iostream>
using namespace std;

int swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverseArr(int arr[], int n){
    int left = 0,right = n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;right--;

    }

}

int main(){
    int n;
    cout<<"Enter the total number of elements"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements: "<<endl;
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    reverseArr(arr,n);
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }


}