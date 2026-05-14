#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void printlist(struct node* head){
    if(head==NULL)
    printf("linked list is empty");
else{
    printf("linked list:");
    while(head!=NULL){
        printf("%d",head->data);
        printf("->");
        head=head->next;
    }
}
}
int main(){
    struct node* head=NULL;
    head=malloc(sizeof(struct node));
    head->data=87;
    head->next=NULL;
    struct node*current=NULL;
    current=malloc(sizeof(struct node));
    current->data=56;
    current->next=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=34;
    current->next=NULL;
    head->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=79;
    current->next=NULL;
    head->next->next->next=current;
    printlist(head);


}