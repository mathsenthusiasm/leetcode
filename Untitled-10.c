#include<stdio.h>
void zeros_array(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
    while(arr[left]==0 && left<right){
        left++;
    }
    while(arr[right]==1 && left<right){
        right--;}
        if(left<right){
            int temp=arr[right];
            arr[right]=arr[left];
            arr[left]=temp;
            left++;right--;
        }
        }
    }
int main(){
    int arr[]={1,0,1,0,0,0,1,1,1};
    int n =sizeof(arr)/sizeof(arr[0]);
   zeros_array(arr,n);
    printf("zeros_array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}