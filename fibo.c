#include<stdio.h>

void fact(int n, int n1, int n2, int flag){
    int ans=0;
    if(flag<=n){
        printf("%d ",n1);
        ans=n1+n2;
        flag++;
        return fact(n, n2, ans, flag);
    }
}

int main(){

    int n, n1=0,n2=1, flag =1;
    scanf("%d",&n);

    fact(n,n1,n2, flag);


}
