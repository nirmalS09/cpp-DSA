#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1234995;
    int count = 0;
    while(n){
        n=n/10;
        count++;
    }
    cout<<"Total elements: "<<count;
}