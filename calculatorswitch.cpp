#include<iostream>
using namespace std;

int calulator(int n1, int n2, int method){

    switch(method){
        case 1:
            return (n1+n2);
            break;
        case 2:
            return (n1-n2);
            break;
        case 3:
            return (n1*n2);
            break;
        case 4:
            return (n1/n2);
            break;
    }
}

int main(){

    int n1,n2;
    cin>>n1>>n2;

    cout<<"MENU\ntype 1,2,3 & 4 for \n1.Addtion\n2.Subtraction\n3.Multiply\n4.Divide\n";

    int method;
    cin>>method;

    cout<<calulator(n1,n2,method);
}