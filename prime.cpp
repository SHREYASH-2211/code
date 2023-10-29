#include<iostream>
using namespace std;

int prime(int a){

    int i=2;

    while(i<a){
        if(a%i==0){
            cout<<"non prime";
            return 0;
        }
        i+=1;
    }
        cout<<"Prime";
}

int  main(){

    int a;
    cout<<"Enter a number\n";
    cin>>a;
    prime(a);
}