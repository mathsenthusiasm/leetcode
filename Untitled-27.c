#include<stdio.h>
int main(){
    int arr[]={4,5,6,7,8};
    int target=11;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
               printf("i=%d,j=%d\n",i,j);
            }
        }
    }
}