#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;

    cout << "Enter a number:\n";
    cin >> n;

    cout << "Enter the power to be\n";
    cin >> m;

    int i = 1, j = n;
    int ans = -1;

    while(i <= j){

        int mid = (i + j) / 2;

        long long value = 1;

        for(int k = 0; k < m; k++){
            value *= mid;
            if(value > n) break; // ⚠️ early stop
        }

        if(value == n){
            ans = mid;
            break;
        }

        else if(value > n){
            j = mid - 1;
        }

        else{
            i = mid + 1;
        }
    }

    cout << "The nth root of " << n << " is: " << ans;
}