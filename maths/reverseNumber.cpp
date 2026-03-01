#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,r=0;
    cin>>n;
    int sign = (n<0)?-1:1;
    n=abs(n);
    while(n){
        int temp = n%10;
        if((r>INT_MAX/10) || (r<INT_MIN/10)) return 0;
        r = r*10+temp;
        n = n/10;
    }
    r*=sign;
    cout<<r;
}