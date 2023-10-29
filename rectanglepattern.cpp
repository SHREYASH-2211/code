#include<iostream>
using namespace std;

int rectangle(int i, int j, int row, int col){

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int row,col;
    cin>>row>>col;
    int i,j;


    rectangle(i,j,row,col);
}