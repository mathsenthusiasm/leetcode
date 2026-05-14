#include<iostream>
using namespace std;
int main(){
    int arr[]={11,3,5,6,8,19};
   // for(int i=0;i<n;i++){
   int n=sizeof(arr)/sizeof(arr[0]);
        int min=arr[0];
        for(int j=1;j<n;j++){
            if(min>arr[j])
            min=arr[j];
        }
        printf("minimum:%d",min);
    }
