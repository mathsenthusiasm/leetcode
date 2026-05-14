#include<stdio.h>
void ascending(int n){
    if(n==0)return;
    ascending(n-1);  
    printf("%d\n",n);
    ascending(n-1);  
 }
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    ascending(n);

}