#include<iostream>
using namespace std;

int permission(int date){

    int flag=0;
    int money=3000;

    for(int i=2;i<date;i++){
        if(date%i==0){
            flag=1;
            continue;
        }
        if(money==0){
            break;
        }
        if(flag==0) cout<<"Go out today! and date is "<<date<<endl;
        money=money-3000;
        cout<<money<<endl;
    }
    
     
}

int main(){

    int date;
    cin>>date;

    permission(date);
}