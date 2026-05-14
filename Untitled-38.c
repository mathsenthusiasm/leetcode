#include<stdio.h>
void decreasing_increasing(int n){
    if(n==0) return;
    printf("%d ",n);
    decreasing_increasing(n-1);
    printf("%d ",n);
    return;

}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    decreasing_increasing(n);

}
//