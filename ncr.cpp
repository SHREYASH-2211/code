#include<iostream>
using namespace std;

int fact(int n){

    int sum=1,i;
    for(i=2;i<=n;i++){
        sum=sum*i;
    }
    return sum;
}

int main(){

    int n,r;
    cin>>n>>r;

   cout<<fact(n)/(fact(n-r)*fact(r));
}
