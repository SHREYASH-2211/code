#include<iostream>
using namespace std;

int selection(int arr[],int n){

  int i,j,temp;
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
  }
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){

    int n;
    cin>>n;

    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    selection(arr,n);


}