#include<stdio.h>
int main(){
    int arr[]={3,2,1,4,5};//bubble
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("sorted array:");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    printf("sorted array:");
    for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
    }

}