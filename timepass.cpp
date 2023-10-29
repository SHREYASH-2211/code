#include<iostream>
using namespace std;

int triangle(int row){

    int i,j;

    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            if(j<i){
                cout<<"  ";
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }
}

int main(){

    

    int row,col;
    cin>>row;

    triangle(row);

}