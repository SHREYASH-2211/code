#include<iostream>
using namespace std;


int reverse(int n){
    int sum=0;

    while(n<0||n>0){
    int lastdigit=n%10;
    sum=sum*10+lastdigit;
    n=n/10;
    }
    cout<<sum;
}

int main(){

    int n;
    cin>>n;

    reverse(n);

}