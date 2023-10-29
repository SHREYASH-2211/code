#include<iostream>
using namespace std;

int sumloop(int n){
    int i;
    int sum;
    for(i=1;i<=n;i++){
        sum=sum+i;   
    }
    cout<<sum;
}

int main(){

    int n;
    cin>>n;

    sumloop(n);
}