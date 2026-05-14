#include<stdio.h>
find_two_number(int arr[],int n){
    int xor=0;
    for(int i=0;i<n;i++){
        xor ^=arr[i];
    }
    int right_most_bit=xor & (~(xor-1));
        int num1=0,num2=0;
        for(int i=0;i<n;i++){
            if(arr[i]& right_most_bit){
                num1^=arr[i];}
                else{
                num2^=arr[i];}
            }
       
       printf("two_unique_number:num1=%d ,num2=%d",num1,num2); }
    
int main(){
    int arr[]={2,4,7,9,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("find two missing number:");
    find_two_number(arr,n);

}