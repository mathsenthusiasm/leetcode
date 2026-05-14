#include<stdio.h>
int main(){
    int arr[]={5,7,2,4,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("sorted array:");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }

    }
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
        