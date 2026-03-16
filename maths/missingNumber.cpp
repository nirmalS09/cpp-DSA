#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr1={1,4,2,5,3,7};
vector<int> arr2={1,4,2,5,3,7,6,9};
int n1 = arr1.size();
int natural1 = (n1+1)*(n1+1+1)/2;
int sum1=0;

for(int i = 0; i<n1; i++){
    sum1+=arr1[i];

}
cout<<"1st array missing element is: "<<natural1-sum1<<endl;
}