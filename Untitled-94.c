#include<stdio.h>
int main(){
    int nums[]={2,2,3,3,4,4,5,5,5,7,7,7};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=7
    printf("findfirst index:");
    int result=binary_search(nums,n,target);
    
}