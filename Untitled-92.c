#include<stdio.h>
int binary_search(int arr[],int n,int x){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x){
        right=mid-1;}
        else{
            left=mid+1;

    }
        
}
return -1;
}
int main(){
    int arr[]={2,5,9,19,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=19;
    printf("idx of target:");
    int result=binary_search(arr,n,target);
    printf("%d",result);

}