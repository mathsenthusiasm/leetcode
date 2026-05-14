#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*remove_node(struct node*head,int val){
    if(head==NULL){
        return head;
    }
    if(head->data==val){
        struct node*temp;
        head=head->next;
        free(temp);
        temp=NULL;
        return head;

    }
    struct node*prev=head;
    struct node*current=head->next;
    while(current!=NULL){
        if(current->data==val){
        prev->next=current->next;
    }
    prev=current;
    current=current->next;
    }
void printlist(struct node*head){
    struct node*temp=head;
    if(temp==NULL){
        printf("linked list is empty");
    return;}
    while(temp!=NULL){
        printf("%d",temp->data);
        if(temp->next!=NULL){
            printf("->");
        }
        temp=temp->next;
    }

}
int main(){
    struct node*head=NULL;
    head=malloc(sizeof(struct node));
    head->data=1;
    head->next=NULL;
    struct node*current=NULL;
    current=malloc(sizeof(struct node));
    current->data=2;
    current->next=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=6;
    current->next=NULL;
    head->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=3;
    current->next=NULL;
    head->next->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=4;
    current->next=NULL;
    head->next->next->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=5;
    current->next=NULL;
    head->next->next->next->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=6;
    current->next=NULL;
    head->next->next->next->next->next->next=current;
printlist(head);
head=remove(head,6);
printlist(head);
}