#include<stdio.h>
binary_search(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)
        return mid;
    if(arr[mid]<target){
        low=mid+1;
    }
    else high=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={-31,-16,0,4,8,21,56,85,124};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=0;
    printf("index of sorted element:");
   int result=binary_search(arr,n,target);
   printf("%d",result);
}