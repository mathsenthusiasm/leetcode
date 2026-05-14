#include<stdio.h>
int binary_search(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
return mid;
        }
        if(arr[mid]<x){
            low=mid+1;
        }
        if(arr[mid]>x){
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={5,8,9,12,14};
    int element=12;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("enter element index:");
    int result=binary_search(arr,size,element);
    printf("%d",result);
}