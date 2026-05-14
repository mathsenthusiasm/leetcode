#include<stdio.h>
#include<string.h>
int fib(int n){
    if(n<=1)
    return n;

}
int memo[100];
int main(){
    memoset(memo,-1,sizeof(memo));
    int n;
    printf("fibonacci of %d is %d",n,fib(n));
    return 0;
}