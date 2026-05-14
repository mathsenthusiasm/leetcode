#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*reverse(struct node*head){
    struct node*current=head;
    struct node*prev=NULL;
    struct node*next=NULL;
    if(head==NULL)
    return NULL;
else if(head->link==NULL)
return head;
else{
    while(current!=NULL){
    next=current->link;
    current->link=prev;
    prev=current;
    current=next;
}
head=prev;
return head;
}
}
void printlist(struct node* head){
    while(head!=NULL){
        printf("%d",head->data);
        printf("->");
        head=head->link;
    }
}
int main(){
    struct node*head=NULL;
    head=malloc(sizeof(struct node));
    head->data=23;
    head->link=NULL;
    struct node*current=NULL;
    current=malloc(sizeof(struct node));
    current->data=29;
    current->link=NULL;
    head->link=current;
    current=malloc(sizeof(struct node));
    current->data=49;
    current->link=NULL;
    head->link->link=current;
    head=reverse(head);
    printlist(head);
}
