#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number:\n";
    cin>>n;

    int i = 0,j=n;
    int maxi = 0;

    while(i<=j){
        int mid = (i+j)/2;
        if(mid*mid>n){
            j = mid-1;
        }
        else{
            i = mid+1;
            maxi=max(maxi,mid);
        }
    }
    cout<<"The sqrt of "<<n<<" is: "<<maxi;
}