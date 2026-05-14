#include<stdio.h>
int odd_number_times(int arr[],int n){
    int xor=0;
    for(int i=0;i<n;i++){
        xor=xor^arr[i];
    }
    return xor; 
}
int main(){
int arr[]={1,2,3,2,3,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
int result=odd_number_times(arr,n);
printf("odd_number_times:%d",result);
}