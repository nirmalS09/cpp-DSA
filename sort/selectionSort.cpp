#include<bits/stdc++.h>
using namespace std;

void swapping(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector<int> arr){
        cout<<endl<<"After sorting: "<<endl;
        for(int i = 0; i<arr.size();i++){
            int mini = i;
            for(int j = i+1; j<arr.size(); j++){
                if(arr[j]<=arr[mini]) mini = j;
            }
            swapping(arr[i],arr[mini]);
        }
        for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";

}

int main(){
    vector<int> arr={13,46,24,52,52,46,20,20,9};
    cout<<"Before sorting:"<<endl;
    for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";
    selectionSort(arr);


}