#include<iostream>
using namespace std;

int np(int i){

    for(i=0;i<100;i++){
      if(i%3==0){
        continue;
      }
      cout<<i<<endl;
     }  
}

int main(){

    int i;
    
    np(i);
}