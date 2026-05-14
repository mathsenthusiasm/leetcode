#include<stdio.h>
int main(){
    int nums[]={4,9,0,0,8,5,0,3};
    int n=sizeof(nums)/sizeof(nums[0]);
    int i=0;
    int j=n-1;
    while(i<j){
        if(nums[j]==0){
            j--;
        }
        else if(nums[i]!=0){
            i++;
        }
        else if(nums[i]==0 && nums[j]!=0){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        
    }
    for(int k=0;k<n;k++){
        printf("%d ",nums[k]);
    }
}
