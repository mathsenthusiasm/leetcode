#include<stdio.h>
int binary_search(int nums[],int n){
    int left=0;
    int right=n-1;
    int total=right;
    int count1=0;
    int count2=0;
    while(left<=right){
       int  mid=left+(right-left)/2;
        while(nums[mid]>0){
            right=mid-1;
        }
        count1=mid-1-left+1;
        count2=total-count1;

    }
    if(count1>count2)
    return count1;
else 
return count2;
}
int main(){
    int nums[]={-2,-1,-1,1,2,3};
    int n=sizeof(nums)/sizeof(nums[0]);
    printf("count of maximum between pos and neg:");
    int result=binary_search(nums,n);
    printf("%d",result);
    return 0;
}