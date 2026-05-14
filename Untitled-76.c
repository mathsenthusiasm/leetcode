#include<stdio.h>
int triangular(int arr[],int n){
    while(n>1){
    for(int i=0;i<n-1;i++){
        arr[i]=(arr[i]+arr[i+1])%10;
    }
    n--;
}
return arr[0];
}
int main(){
    int arr[]={2,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("triangular array:");
    int result=triangular(arr,n);
    printf("triangular array:%d",result);

}