#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    bool prime = true;
    if(n<=1){
        cout<<"Neither prime nor composite"<<endl;
        return 0;
    }
    for(int i =2; i*i<=n; i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(prime) cout<<"It is a Prime number"<<endl;
    else cout<<"It is not a Prime number"<<endl;
}