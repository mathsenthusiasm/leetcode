#include<stdio.h>
#define size 10
int st[size];
int top=-1;
void push(int val){
    if(top==size-1){
        printf("overflow");
    }
    else {
        top++;
        st[top]=val;
        printf("push element:%d\n",st[top]);
    }
}
    void pop(){
        if(top==-1){
            printf("underflow");
        }
        else{
            printf("pop the element:%d\n",st[top]);
            top--;
        }
}
void display(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("stack element:\n");
        for(int i=0;i<top;i++){
            printf("%d\n",st[i]);
        }
    }
}
int main(){
    push(3);
    push(2);
    push(4);
    push(9);
    push(1);
    display();
    pop();
    display();

}