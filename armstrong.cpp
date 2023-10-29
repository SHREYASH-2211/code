#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n){
    int original=n;
    float sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+round(pow(lastdigit,3));
        n=n/10;
    }
    if(original==sum){
        cout<<"It is an armstrong no.";
    }
    else{
        cout<<"It is not an armstrong no.";
    }
}

int main(){

    int n;
    cin>>n;

    armstrong(n);
}