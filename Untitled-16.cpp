#include<iostream>//prefix sum method
using namespace std;
void zeros_ones(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0);
        count++;
    }
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    for(int i=count;i<n;i++){
        arr[i]=1;
    }
}
int main(){
    int arr[]={1,0,1,0,0,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   zeros_ones(arr,n);
   cout<<"zeros_ones element:"<<endl;
   for(int i=0;i<n;i++){
   cout<<arr[i]<<endl;
   }
}