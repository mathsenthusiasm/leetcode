#include<stdio.h>
void sorted_array(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            printf("repeated value:%d",arr[j]);
        break;
    }
        }
    }

}
int main(){
    int arr[]={6,1,7,3,2,5,4,8,9,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("original array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    sorted_array(arr,n);

}