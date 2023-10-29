#include<iostream>
using namespace std;

int lop(int n){

    do{
        cout<<n<<endl;
        cin>>n;

    }while(n>0);
    
}

int main(){

    int n;
    cin>>n;

    lop(n);

    return 0;
}