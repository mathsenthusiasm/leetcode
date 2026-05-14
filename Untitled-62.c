#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,8};
    printf("enter target sum:\n");
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("i=%d,j=%d\n",i,j);
            }
        }
    }
}