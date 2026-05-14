#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int printlist(struct node*head){
    int count=0;
    if(head==NULL){
    printf("linked list is empty");
}

else{
    printf("linked list:");
    while(head!=NULL){
        //printf("%d ",head->data);
        //printf("->");
        count++;
        head=head->next;
    }
}
return count;
}
int main(){
    struct node*head=NULL;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;
    struct node* current=NULL;
    current=malloc(sizeof(struct node));
    current->data=34;
    current->next=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=24;
    current->next=NULL;
    head->next->next=current;
    int count=printlist(head);
    printf("count:%d",count);
   return 0;
}