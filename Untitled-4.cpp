#include<Stdio.h>
int zero_one_prefix(int arr[],int n){
    int count_one=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
        count_one++;
    }
    for(int i=0;i<count_one;i++){
        arr[i]=1;

    }
    for(int i=count_one;i<n;i++){
        arr[i]=0;
    }
}
int main(){
    int arr[]={1,0,0,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    zero_one_prefix(arr,n);
    printf("sorted array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}