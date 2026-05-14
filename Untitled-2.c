#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void printlist(struct node* head){
    if(head==NULL)
    printf("linked is empty");
else{
    while(head!=NULL){
        printf("%d",head->data);
        printf("->");
        head=head->next;
    }
}
printf("\n");
}
struct node* add_at_end(struct node*head,int val){
    struct node*temp=head;
    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
 return head;
}
 struct node*add_at_beg(struct node *head,int val){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    return temp;
else{
    temp->next=head;
    head=temp;
 return head;}
}
struct node*del_at_beg(struct node* head){
    struct node*temp=head;
    head=temp->next;
    free(temp);
    temp=NULL;
    return head;
}
struct node* del_at_end(struct node* head){
    struct node*temp1=head;
    struct node*temp2=NULL;
    if(head==NULL)
    return head;
else if(head->next==NULL)
return head;

   else{
    while(temp1->next->next!=NULL){
        temp1=temp1->next;
    }

    temp2=temp1->next;
    free(temp2);
    temp1->next=NULL;
    return head;
}
}
int main(){
    struct node*head=NULL;
    head=malloc(sizeof(struct node));
    head->data=56;
    head->next=NULL;
    struct node*current=NULL;
    current=malloc(sizeof(struct node));
    current->data=54;
    current->next=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=34;
    current->next=NULL;
    head->next->next=current;
    printf("linked list:");
    printlist(head);
   head=add_at_beg(head,67);
   printlist(head);
   head=add_at_end(head,32);
   printlist(head);
   head=del_at_beg(head);
   printlist(head);
   head=del_at_end(head);
   printlist(head);

}