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
    cin>>n;

   
   for(int i = 0; i<n; i++){
    for(int j = 0; j<=i; j++){
        cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
    }
    cout<<endl;
   }
}
