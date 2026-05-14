#include<stdio.h>
void median_sorted(int*nums1,int*nums2,int n1,int n2){
    int merged[100];
    int i=0,j=0,k=0;
   // merge array
   while(i<n1 && j<n2){
    if(nums1[i]<nums2[j]){
        merged[k]=nums1[i];
        k++;
        i++;
    }
    else{
        merged[k]=nums2[j];
        k++;
        j++;
    }
   }
   while(i<n1){
    merged[k]=nums1[i];
    k++;
    i++;
   }
   while(j<n2){
    merged[k]=nums2[j];
    k++;
    j++;
   }
   int total=n1+n2;
   if(total%2==0){
    float median=(merged[total/2-1]+merged[total/2])/2.0;
    printf("median:%.2f\n",median);
   }
   else{
    printf("median:%d\n",merged[total/2]);
   }

}

int main(){
    int nums1[]={2,3,4,7,9};
    int nums2[]={4,7,9};
    int n1=sizeof(nums1)/sizeof(nums1[0]);
    int n2=sizeof(nums2)/sizeof(nums2[0]);
    median_sorted(nums1,nums2,n1,n2);
    return 0;


}