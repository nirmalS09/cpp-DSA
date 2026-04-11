#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={10, 5, 2, 7, 1, 9};
    int k = 15;
    map<int,int> mp;
    long long sum = 0;
    int maxLen = 0;

    for(int i = 0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum==k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum-k;
        if(mp.find(rem)!=mp.end()){
            int len = i - mp[rem];
            maxLen = max(maxLen,len);
        }
        if(mp.find(sum)==mp.end())
        mp[sum] = i;
    }
    cout<<maxLen;
}