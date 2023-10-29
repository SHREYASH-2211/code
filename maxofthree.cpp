#include<iostream>
using namespace std;

int max(int a, int b, int c){

    if (a>b && a>c)        return a;
    else if(b>a && b>c)    return b;
    else                   return c;
    
}

int main(){

    int a,b,c;
    cout<<"Enter three no. to find max of them \n";
    cin>>a>>b>>c;
    cout<<max(a,b,c);
}