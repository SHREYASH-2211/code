#include<iostream>
using namespace std;

int output(int n){

    int i=2;

    if(i<n){
        if(n%i==0){
            cout<<"The number is "<<n<<" and it is even.";
        }
        else{ 
            cout<<"The number is "<<n<<" and it is odd.";
        }
    }
}

int main(){

    int n;
    cin>>n;

    output(n);
}