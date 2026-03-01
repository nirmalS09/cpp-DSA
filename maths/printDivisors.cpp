#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for(int i = 1; i*i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
            if(i!=n/i){
                arr.push_back(n/i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    for(int ele: arr){
        cout<<ele<<" ";
    }
}