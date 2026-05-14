#include<stdio.h>
void xor_swapp(int *a,int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main(){
    int a,b;
    printf("enter any number:");
    scanf("%d",&a);
    printf("enter any number:");
    scanf("%d",&b);
    printf("before swapping:a=%d,b=%d",a,b);
    printf("\n");
    xor_swapp(&a,&b);
    printf("after swapping:a=%d,b=%d",a,b);
}