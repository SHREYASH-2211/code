#include<iostream>
using namespace std;

int number(int row, int col){

    int i,j;

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if((1<=j && j<=i) || (col-i<j && j<=col)){
            cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){

    int row=4, col=8;
    // cin>>row;

    number(row,col);

}