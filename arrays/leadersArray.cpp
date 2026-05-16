#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> arr){
    vector<int> ans;
    if(arr.size()==0) return ans;
    int n = arr.size();

    //last element is always a leader
    int max = arr[n-1];
    ans.push_back(max);

    //checking other elements
    for(int i = n-2; i>=0; i--){
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;

}

int main(){
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leaders(arr);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}