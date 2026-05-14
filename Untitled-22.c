#include<stdio.h>
int main(){
    int arr[]={2,5,8,10,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    int target=18;
    while(i<j){
           if(arr[i]+arr[j]==target){
                printf("i=%d,j=%d",i,j);
            break;}
               else if(arr[i]+arr[j]>target){
                    j--;
                }
               else if(arr[i]+arr[j]<target){
                    i++;
                }
            }
        }
    

