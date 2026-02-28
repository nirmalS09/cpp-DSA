#include<iostream>
#include<vector>
using namespace std;

int main(){
    bool check = true;
    vector<int> arr = {4,53,66,222,555};
    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i]>arr[i+1]){
            check=false;
            break;
        }
    }
    if(check) cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;

}