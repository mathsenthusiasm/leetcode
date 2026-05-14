#include<stdio.h>
    int missing_number(int nums[],int n){
        int a=0,b=0;
        for(int i=0;i<n;i++){
            a=a^nums[i];
        }
        for(int i=0;i<n+1;i++){
            b=b^i;
        }

     return a^b;
    }
    int main(){
    int nums[]={0,1,2,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);
   int result= missing_number(nums,n);
   printf("missing number:%d",result);
    
}
  