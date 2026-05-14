#include<stdio.h>
int missing_number(int arr[],int n){
    int total_sum= (n*(n+1))/2;
    int current_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
    }
    return total_sum-current_sum;
}
int main(){
    int arr[]={1,2,5,6,4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=missing_number(arr,n);
    printf("%d",result);
}