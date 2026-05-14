#include<stdio.h>
int fact(int n){
    if(n==1 ||n==0)
    return 1;
else{
    return n*fact(n-1);
}
}
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
   int  result=fact(n);
   printf("fact=%d",result);
}