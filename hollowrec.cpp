#include<iostream>
using namespace std;

int hollow(int row, int col){
    
    int i,j;

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }          
        }
        cout<<endl;
        
    }

}

int main(){

    int row,col;
    cin>>row>>col;

    hollow(row,col);
}