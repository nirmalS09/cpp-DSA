#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter total no of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter the elemetns: "<<endl;
        cin>>arr[i];
    }
    int lar=INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>lar) lar = arr[i];
    }
    cout<<"Largest element is: "<<lar;


}

