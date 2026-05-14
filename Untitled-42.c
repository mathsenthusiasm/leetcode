#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int down_ways=0;
    int right_ways=0;
    if(cr==er && cc==ec)
    return 1;
if(cr==er){
    right_ways+=maze(cr,cc+1,er,ec);

}
if(cc==ec){
    down_ways+=maze(cr+1,cc,er,ec);

}
else if(cc<ec && cr<er){
    down_ways+=maze(cr+1,cc,er,ec);
    right_ways+=maze(cr,cc+1,er,ec);
}
int total_ways=down_ways+right_ways;
return total_ways;
}
int main(){
    int n,m;
    printf("enter number of rows of maze:");//rows
    scanf("%d",&n);
    printf("enter number of coloumbs of maze:");//rows
    scanf("%d",&m);
int no_ways=maze(1,1,n,m);
printf("number of ways:%d",no_ways);
}