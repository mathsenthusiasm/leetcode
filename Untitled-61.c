#include<stdio.h>
int main(){
    int arr[]={2,3,4,5,8};
    int target=11;
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    printf("index :");
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("i=%d,j=%d",i,j);
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
    }
}