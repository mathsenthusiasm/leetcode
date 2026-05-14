#include<stdio.h>
int main(){
    int arr[]={3,6,8,9.6};
    int target=14;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("target index:");
    for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            printf("i=%d,j=%d",i,j);
        }
     }
    }
}