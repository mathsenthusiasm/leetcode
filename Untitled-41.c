#include<stdio.h>
int powerlog(int a,int n){
    if(n==1) return a;
    int x=powerlog(a,n/2);
if(n%2==0)
return x*x;
else
return x*x*a;
}
int main(){
    int n,a;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&n);
    int find=powerlog(a,n);
    printf("%d",find);
 return 0;
}