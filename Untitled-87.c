#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node*left;
        struct node*right;
    };
    int count_node(struct node*temp){
        int count=0;
        if(temp->data==NULL)
        return 0;
    while(temp->left->data!=NULL || temp ->right->!=NULL){
  
    }

    }
int main(){
    struct node*root=NULL;
    root=malloc(sizeof(struct node));
    root->data=20;
    root->left=NULL;
    root->right=NULL;
    struct node*current=NULL;
    current=malloc(sizeof(struct node));
    current->data=30;
    current->left=NULL;
    current->right=NULL;
    root->left=current;
    current=malloc(sizeof(struct node));
    current->data=45;
    current->left=NULL;
    current->right=NULL;
    root->right=current;
    printf("root data:%d\n",root->data);
    printf("root left:%d\n",root->left->data);
    printf("root right:%d\n",root->right->data);
    //printf("root right right->:%d\n",root->right->right->data);
   int result= count_node(root);
   printf("result:%d\n",result);
}