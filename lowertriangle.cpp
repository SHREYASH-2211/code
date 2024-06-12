#include<iostream>
using namespace std;

int hollow(int row){
    
    int i,j;
    // for(i=row;i>=1;i--){
    //     for(j=1;j<=i;i++){
    //         if(i>j-1){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    for(i=row;i>=1;i--){
        for(j=1; j<=row; j++){
            if (j<=row && j>=i){
            cout<<" *";
        }
        else{
            cout<<"  ";
        }
        }
        cout<<endl;
    }
    
}
int main(){

    int row;
    cin>>row;
    hollow(row);
}