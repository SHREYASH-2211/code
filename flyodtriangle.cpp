#include<iostream>
using namespace std;

int number(int row){

    int count=1;

    int i,j;

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

int main(){

    int row;
    cin>>row;

    number(row);

}