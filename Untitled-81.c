#include<stdio.h>
int main(){
    int base=1,sum=0,r,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(n>0){
      r=n%10;
      sum=sum+r*base;
      n=n/10;
      base=base*2;
     
    }
    printf("%d",sum);
}