#include<stdio.h>
int equilibrium(int arr[],int n){
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int left_sum=0;
    for(int i=0;i<n;i++){
       int  right_sum=total_sum-arr[i]-left_sum;
       left_sum+=arr[i];
       if(left_sum==right_sum)
       return i;
    }
return -1;
}
int main(){
    int arr[]={3,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=equilibrium(arr,n);
    printf("index of equilibrium:%d",result);
}