#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
 void printlist(struct node*head){
    if(head==NULL){
        printf("linked list is empty");
    }
    else{
        while(head!=NULL){
            printf("%d",head->data);
            printf("->");
            head=head->next;
        }
    }
 printf("\n");
}
struct node* add_at_beg(struct node* head,int val){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    return head;}
else{
    temp->next=head;
    head=temp;
}
return head;
}
struct node* add_at_end(struct node*head,int val){
    struct node*temp=NULL;
    temp=head;
    struct node*ptr=malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=NULL;
    if(head==NULL)
    return ptr;
else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
}
return head;
}
struct node*del_at_beg(struct node*head){
    struct node*temp;
    if(head==NULL)
    return head;
    else if(head->next==NULL)
    return head;
else{
    temp=head;
    head=temp->next;
    free(temp);
    temp=NULL;
    return head;
}
}
struct node*del_at_end(struct node* head){
    struct node*temp1=head;
    struct node*temp2=NULL;
    struct node*temp3=NULL;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp2=temp1;
    free(temp);
    temp1->next=NULL;
    return head;
}
struct node*reverse(struct node*head){
    struct node*current=head;
    struct node* ptr=NULL;//next
    struct node*temp=NULL;//prev
while(current!=NULL){
    ptr=current->next;
    current->next=temp;
    temp=current;
    current=ptr;
}
head=temp;
return head;
}

int main(){
    struct node*head=NULL;
    head=malloc(sizeof(struct node));
    head->data=67;
    head->next=NULL;
    struct node*current=NULL;
    current=malloc(sizeof(struct node));
    current->data=54;
    current->next=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=56;
    current->next=NULL;
    head->next->next=current;
    printlist(head);
    head=add_at_beg(head,65);
    printlist(head);
    head=add_at_end(head,23);
    printlist(head);
    head=del_at_beg(head);
    printlist(head);
    head=del_at_end(head);
    printlist(head);
    head=reverse(head);
    printlist(head);
}