#include<stdio.h>
 void zeros_last(int nums[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[j++]=nums[i];
        }
    }
    while(j<n){
        nums[j++]=0;
    }
    printf("required array:");
    for(int i=0;i<n;i++){
    printf("%d ",nums[i]);
}
return;
}
int main(){
    int nums[]={0,1,0,3,12,0};
    int n=sizeof(nums)/sizeof(nums[0]);
    zeros_last(nums,n);
}
