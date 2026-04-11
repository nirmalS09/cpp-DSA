#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1={1,3,4,6,7,8,9};
    vector<int> arr2={1,2,3,5,6,7,9,10};
    int a = arr1.size();
    int b = arr2.size();

    vector<int> interSection;

    int i = 0, j=0;
    while(i<a && j<b){
        if(arr1[i]==arr2[j]){
          if(interSection.size()==0 || interSection.back()!=0){
            interSection.push_back(arr1[i]);
          }
          i++,j++;
        }
        else if(arr1[i]<arr2[j]) i++;
        else j++;

    }
    for(auto ans:interSection){
        cout<<ans<<" ";
    }

}