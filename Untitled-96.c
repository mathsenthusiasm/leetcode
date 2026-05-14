#include<stdio.h>
int peakelement(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(arr[mid]<arr[mid+1]){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return left;
}
int main(){
    int arr[]={2,5,6,7,9,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("peak element:");
    int result=peakelement(arr,n);
    printf("%d",result);
    return 0;
}