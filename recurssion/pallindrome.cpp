#include <bits/stdc++.h>
using namespace std;

bool palin(int i, string &s){
    if (i >= s.length() / 2) return true;
    if(s[i]!=s[s.length()-i-1]) return false;
    return palin(i+1, s);
}


int main(){
    string s;
    cout<<"Enter a string:"<<endl;
    getline(cin, s);
    cout<<palin(0,s);
}