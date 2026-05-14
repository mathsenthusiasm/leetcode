#include<stdio.h>
void even_first(int arr[],int n){
    int count=0;
    int nums[]={0};
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        nums[arr[i]]++;
    }
}
for(int i=0;i<count;i++){
    arr[i]
}
}
itn main(){
    int arr[]={3,5,7,9,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("original array:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    even_first(arr,n);
}