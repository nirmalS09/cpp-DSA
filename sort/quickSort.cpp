#include<bits/stdc++.h>
using namespace std;

int quick(vector<int> &arr, int low, int high){
    int pivot = low;
    int left = low, right = high;
    while(left<right){
        while(arr[left]<=arr[pivot] && left<=high-1){
            left++;
        }
        while(arr[right]>=arr[pivot] && right>=low+1){
            right--;
        }
        if(left<right) swap(arr[left],arr[right]);
    }
    swap(arr[low],arr[right]);
    return right;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int pIndex=quick(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);

    }

}

int main(){
    vector<int> arr={13,46,24,52,52,46,20,20,9};
    cout<<"Before sorting:"<<endl;
    for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";
    int n = arr.size()-1;
    quickSort(arr,0,n);
    cout<<"\nAfter Sorting:\n";
    for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";


}