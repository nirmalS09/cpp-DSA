#include<bits/stdc++.h>
using namespace std;

void swapping(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int> arr){
        cout<<endl<<"After sorting: "<<endl;
        for(int i = arr.size()-1; i>=0;i--){
            int didswap=false;
            for(int j = 0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    swapping(arr[j],arr[j+1]);
                    didswap=true;
                }
                
            }if(didswap==false) break;

        }
        for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";

}

int main(){
    vector<int> arr={13,46,24,52,52,46,20,20,9};
    cout<<"Before sorting:"<<endl;
    for(int i = 0; i<arr.size();i++) cout<<arr[i]<<" ";
    bubbleSort(arr);


}