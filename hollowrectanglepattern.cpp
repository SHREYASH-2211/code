#include<iostream>
using namespace std;

int hollow(int row, int col){
    int i, j;
    for(i=1;i<=row;i++){
        if(i==1||i==row){
            for(j=1;j<=col;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            for(j=1;j<=col;j++){
                if(j==1){
                    cout<<"* ";
                }
                else if(j==col){
                    cout<<"* "<<endl;
                }
                else{
                    cout<<"  ";
                }
            }
        }
    }


}

int main(){

    int row,col;
    cin>>row>>col;

    hollow(row,col);
}