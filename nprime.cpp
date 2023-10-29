#include<iostream>
using namespace std;

int prime(int start,int end){

    int i=2, prime = 1;

    for(start;start<=end;start++){
        prime = 1;
        for(i = 2; i<start; i++)
        {
            if(start%i==0){
                prime = 0;
            }
        }
        if(prime==1){
            cout<<start<<" is a prime"<<endl; 
        }
    }
}

int main(){
    int start,end;
    cin>>start>>end;

    prime(start,end);
}