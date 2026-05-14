#include<stdio.h>
int equilibrium_point(int arr[],int n){
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int left_sum=0;
    for(int i=0;i<n;i++){
        int right_sum=total_sum-left_sum-arr[i];
        if(right_sum==left_sum){
        return i;}
    left_sum+=arr[i];
    }
    return -1;
}
int main(){
    int arr[]={3,4,5,6,4,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=equilibrium_point(arr,n);
    printf("%d",result);

}