#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the total number of elements"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements: "<<endl;
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int l=INT_MIN, sl=INT_MIN;
    for(int i =0; i<n;i++){
        if(arr[i]>l){
            sl = l;
            l = arr[i];
        }
        else if(arr[i]<l && arr[i]>sl) sl = arr[i];
    }

    cout<<"The second largest number is: "<<sl;
}