#include<iostream>
using namespace std;

int add(int a, int b){

   int sum=a+b;

   return sum;
}

int main(){

    int a,b;
    cout<<"Enter a two numbers to add them";
    cin>>a>>b;
    cout<<add(a,b);
}