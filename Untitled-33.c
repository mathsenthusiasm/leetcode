#include<stdio.h>
void zeros_first(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    for(int i=count;i<n;i++){
        arr[i]=1;

    }
   printf("\nzeros_first array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={1,0,0,0,1,1,1,};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("original array:");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  zeros_first(arr,n);
}