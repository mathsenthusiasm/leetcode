#include<stdio.h>//convert to binary
int main(){
    int n,r,sum=0,base=1;
    printf("enter any number:");
    scanf("%d",&n);
    while(n>0){
    r=n%2;
    sum=sum+base*r;
    n=n/2;
    base=base*10;
    }
    printf("%d",sum);
}