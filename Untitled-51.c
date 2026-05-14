#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int search(struct node*head,int val){
    struct node*current=head;
    while(current!=NULL){
       if (current->data=val)
       return val;
        current=current->next;
      
    }
    return 0;
}
void printlist(struct node*head){
    int count=0;
    struct node*temp=head;
    if(temp==NULL)return;
    while(temp!=NULL){
        printf("%d",temp->data);
        if(temp->next!=NULL){
            printf("->");
        }
        count++;
        temp=temp->next;
    }
    printf("\n");
    printf("count:%d",count);
    printf("\n");
    
}
int main(){
    struct node*head=NULL;
    head=malloc(sizeof(struct node));
    head->data=100;
    head->next=NULL;
    struct node *current=NULL;
    current=malloc(sizeof(struct node));
    current->data=32;
    current->next=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=21;
    current->next=NULL;
    head->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=13;
    current->next=NULL;
    head->next->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=90;
    current->next=NULL;
    head->next->next->next->next=current;
    printlist(head);
    int result=search(head,100);
    printf("%d",result);
    
}