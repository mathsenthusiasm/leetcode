#include<stdio.h>
int missing_number(int arr[],int n ){
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor1^=arr[i];
    }
    for(int i=0;i<n;i++){
        xor2^=i;
    }
    return xor1^xor2;
}
int main(){
    int arr[]={1,2,4,5,6};
    int n=6;
    int result=missing_number(arr,n);
    printf("find missing:%d",result);
}