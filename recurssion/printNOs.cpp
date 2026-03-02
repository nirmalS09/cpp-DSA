#include<iostream>
using namespace std;

void printDesc(int n){
    if(n<=0) return;
    cout<<n<<" ";
    printDesc(n-1);
}
void printAsc(int n){
    if(n<=0) return;
    printAsc(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    printDesc(n);
    printAsc(n);
}