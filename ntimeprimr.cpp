#include<iostream>
using namespace std;

int prime_range(int start, int end){

    int flag = 0;

    for(start;start<=end;start++){
        flag = 0;
        for(int i=2;i<start/2;i++){
            if(start%i==0){
                flag = 1;
                break;
            }
        }
        if (flag == 0) {cout<<start<<' ';}
    }
        

    // for (int j = start; j<=end; j++){
    //     flag = 0;
    //     for(int i = 2; i<j; i++){
    //         if(j%i==0){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //         if (flag==0) cout<<j<<' ';
    // }
}


int main(){

    int start,end;
    cin>>start>>end;

    prime_range(start,end);

}
