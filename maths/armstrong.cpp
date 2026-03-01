#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arm=0;
    int count=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int num = n;
    int original = n;
    while(n!=0){
        count++;
        n/=10;
    }
    while(num!=0){
        int rem = num%10;
        arm += round(pow(rem,count));
        num/=10;
    }
    cout<<"The new number is: "<<arm<<endl;
    if(original==arm) cout<<"It is a armstrong number"<<endl;
    else cout<<"It is not a armstrong number"<<endl;
}