#include<stdio.h>
int binary_search(int arr[],int n,int x){
int left=0;
int right=n-1;
int idx=-1;
while(left<=right){
    int mid=left+(right-left)/2;
    if(arr[mid]==x){
idx=mid;
left=mid+1;
    }

else if(arr[mid]<x){
    left=mid+1;
}
else right=mid-1;
     
}
return idx;
}
int main(){
    int arr[]={8,12,15,17,17,17,18,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=17;
    printf("maximum occurence element:");
   int result= binary_search(arr,n,target);
   printf("%d",result);
}