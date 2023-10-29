#include<iostream>
using namespace std;

int rohan(int pocketmoney){

    if(pocketmoney>5000)                    
    {
        cout<<"Going with Neha";
        if(pocketmoney>10000){
            cout<<" for roadtrip";
        }
        else if(pocketmoney<10000){
            cout<<" for restaurant";
        }
    }        
    else if(pocketmoney>2000)               cout<<"Going with Rashmi";
    else if(pocketmoney<2000)               cout<<"Going with Friends";

}
int main(){

    int pocketmoney;
    cin>>pocketmoney;

    rohan(pocketmoney);

    return 0;
}