#include<iostream>
using namespace std;

int number(int row){

    int i,j;

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            if(j<=row){
            cout<<i;
            }
        }
        cout<<endl;
    }
}

int main(){

    int row;
    cin>>row;

    number(row);

}