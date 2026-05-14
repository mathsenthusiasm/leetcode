#include<stdio.h>
int main(){
    int nums[]={4,3,6,8,9,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    int max1=nums[0];
    int max2=nums[1];
    printf("enter first largest element:");
    for(int i=1;i<n;i++){
        if(nums[i]>max1){
          max2=max1;
            max1=nums[i];
        }
        else if(nums[i]>max2 && nums[i]<max1){
            max2=nums[i];

        }

    }
    printf("max1=%d,max2=%d",max1,max2);
}