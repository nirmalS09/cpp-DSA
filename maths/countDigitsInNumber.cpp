#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1234995;
    if (n == 0) {
        cout << "Total digits: 1";
        return 0;
    }
    n = abs(n);
    int count = 0;
    while(n){
        n=n/10;
        count++;
    }
    cout<<"Total elements: "<<count;
}