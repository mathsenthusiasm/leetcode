#include<stdio.h>
int main(){
    int arr[]={6,9,4,3,5};
    int n=sizeof(arr)sizeof(arr[0]);
    int max1=arr[0];
    int max2=arr[1];
    for(int i=2;i<n;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];}
            else if(arr[i]>max2 && arr[i]<max1){
                max2=arr[i];
            }
    }
    printf("max1=%d,max2=%d",max1,max2);
}