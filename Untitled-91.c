#include<stdio.h>
int binary_search(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            low=mid+1;
        }
        else high=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={3,6,9,12,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=12;
    printf("index of target element:");
    int result=binary_search(arr,n,target);
    printf("%d",result);

}