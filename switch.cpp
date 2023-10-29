#include<iostream>
using namespace std;

int buttons(int button){

    switch(button){
        case 1:
            cout<<"Hello";
        break;
        case 2:
            cout<<"Namaste";
        case 3:
            cout<<"Hola";
        break;
        default:
            cout<<"Invalid input";
            break;
    }
}

int main(){

    int button;
    cout<<"Menu \ntype 1,2,3 \n";
    cin>>button;

    

    buttons(button);
}