#include<stdio.h>
int main(){
    int n,a=1,b=2,c;
    printf("enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
return 0;
}