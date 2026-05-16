#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int l=low;
    int r=mid+1;
    while(l<=mid && r<=high){
        if(arr[l]<=arr[r]){
            temp.push_back(arr[l]);
            l++;
        }
        else{
            temp.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){
        temp.push_back(arr[l]);
        l++;
    }
    while(r<=high){
        temp.push_back(arr[r]);
        r++;
    }
    for(int i =low; i<=high;i++){
        arr[i]=temp[i-low];
    }
}




void mergeSort(vector<int> &arr, int left, int right){
        int mid = (left+right)/2;
        if(left>=right) return;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);

}

int main(){
    vector<int> arr={13,46,24,52,52,46,20,20,9};
    cout<<"Before sorting:"<<endl;
    for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";
    int n = arr.size()-1;
    mergeSort(arr,0,n);
    cout<<"\nAfter Sorting:\n";
    for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";


}