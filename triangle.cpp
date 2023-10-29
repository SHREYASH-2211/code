#include<iostream>
using namespace std;

int triangle(int row){
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=row;i>=1;i--){
        for(j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){

    int row,col;
    cin>>row;

    triangle(row);
}