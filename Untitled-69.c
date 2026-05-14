#include<stdio.h>
int main(){
    int a=9;
    int b=8;
    int temp=a^b;
    a=a^temp;
    b=b^temp;
    printf("a=%d,b=%d",a,b);
}