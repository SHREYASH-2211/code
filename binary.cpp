#include<iostream>
using namespace std;

int binary(int arr[],int n,int key){

    int start=0,end=n,mid;

    while(start<=end){

    mid=(start+end)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int key;
    cin>>key;

    cout<<binary(arr,n,key);

}