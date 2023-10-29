#include<iostream>
using namespace std; 

int average(float a, float b){

    float ans;
    ans=float((a+b)/2);

    cout<<ans;
}

int main(){

    float a,b;
    cin>>a>>b;

    average(a,b);
}