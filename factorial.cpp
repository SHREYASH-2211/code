#include<iostream>
using namespace std;

void fact(int n){
    
    int i,ans=1;
    for(i=2;i<=n;i++){

        ans=ans*i;
    }
    cout<<ans;
}

int main(){

    int n;
    cin>>n;

    fact(n);
}