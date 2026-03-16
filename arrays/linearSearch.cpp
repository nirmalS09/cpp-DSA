#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int num){
    int back=arr.size()-1;
    int front = 0;
    while(front<=back){
        if(arr[front]==num) return front;
        else if(arr[back]==num) return back;
        front++;back--;


    }
    return -1;
}

int main(){
    vector<int> arr1={2,4,1,30,5,20,1,0};
    vector<int> arr2={9,10,4,45,11,03,1};

    int num1 = 20;//5
    int num2 = 4; //2

    cout<<"1st part is: "<<search(arr1,num1)<<endl;
    cout<<"2nd part is: "<<search(arr2,num2);

}