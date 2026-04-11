#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1={1,3,4,6,7,8,9};
    vector<int> arr2={1,2,5,6,7,9,10};
    int a = arr1.size();
    int b = arr2.size();

    // //brute
    // set<int> st;
    // for(int i =0; i<arr1.size(); i++){
    //     st.insert(arr1[i]);
    // }
    // for(int i =0; i<arr2.size(); i++){
    //     st.insert(arr2[i]);
    // }
    // for(auto i:st){
    //     cout<<i<<" ";
    // }

    //optimal
    vector<int> unionArr;
    int i = 0, j=0;
    while(i<a  && j<b){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);

            }
            i++;

        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);

            }
            j++;
        }
    }
    while (i<a)
    {
        if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);

            }
            i++;
    }
    while (j<b)
    {
        if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);

            }
            j++;
    }

    for(auto ans:unionArr){
        cout<<ans<<" ";
    }
    

}