#include<stdio.h>
int main(){
    int arr[]={5,7,2,4,12};
    int n=sizeof(arr)sizeof(arr[0]);
    printf("sorted array:");
    int left=0;
    int right=n-1;
    while(j>i){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=arr[i];
            i++;
            j--;
        }
    }
}