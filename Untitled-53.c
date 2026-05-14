#include<stdio.h>
int complement(int N,int r){
    int p,count=0;
    int temp=N;
    while(N>0){
        p=temp%r;
        N=temp/r;
        count++; 
    }
    int c=count;
    int value=r^c -N;

    return value;

}
int main(){
    int N,r;
    printf("enter any number :");
    scanf("%d",&N);
    printf("enter base number:");
    scanf("%d",&r);
int result=complement(N,r);
printf("%d",result);
return 0;
}