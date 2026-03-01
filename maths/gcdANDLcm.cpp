#include<iostream>
using namespace std;

int findGCD(int a, int b){
    //basic
    // for(int i = min(a,b); i>0; i--){
    //     if(a%i==0 && b%i==0){
    //         return i;
    //     }
    // }
    // return 1;

    //recursion--euclidean algo
    if(b==0) return a;
    return findGCD(b,a%b);

}

int findLCM(int a, int b){
    return ((a*b)/findGCD(a,b));
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"The gcd of "<<a<<" and "<<b<<" is: "<<findGCD(a,b)<<endl;
    cout<<"The lcm of "<<a<<" and "<<b<<" is: "<<findLCM(a,b)<<endl;

}