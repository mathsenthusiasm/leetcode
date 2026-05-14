#include<stdio.h>
#include<stdlib.h>
struct node{
    int key;
    struct node*left;
    struct node*right;
};
int main(){
    struct node*root=NULL;
    root=malloc(sizeof(struct node));
    root->left=NULL;
    root->right=NULL;

    struct node*current=NULL;
    current=malloc(sizeof(struct node));
    current->key=key;
    root->left=current;
    root->left->left=NULL;
    root->left->right=NULL;

}
struct 