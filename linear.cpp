#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int key;
    cin>>key;

    for(int i=0;i<n;i++){
    
        if(arr[i]==key){
            cout<<i;
        }
    }
}