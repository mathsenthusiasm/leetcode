#include<stdio.h>
int duplicate_element(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
             count++;
            break;}
        }
    }

}
int main(){
    int arr[]={2,3,4,5,5,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=duplicate_element(arr,n);
    printf("number of duplicate elements:%d",result);


}