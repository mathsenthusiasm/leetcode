#include<stdio.h>
int main(){
    int f0,f1,fn;
    int n;
    printf("enter f0:");
    scanf("%d",&f0);
    printf("enter f1:");
    scanf("%d",&f1);
    printf("enter number n:");
    scanf("%d",&n);
    if(n==0){
        printf("F(%d)=%d\n",n,f0);
        return 0;}
        if(n==1){
            printf("F(%d)=%d\n",n,f1);
            return 0;
        }
     int a=f0,b=f1,c=fn;
     while(n!=6){
        c=a+b;
        a=b;
        b=c;
     }
     printf("recurrence value:%d",c);
   
   
    }