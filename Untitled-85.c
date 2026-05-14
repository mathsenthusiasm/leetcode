#include<stdio.h>
#include<stdlib.h>
struct node{
    int key;
    struct node*left;
    struct node*right;
};
struct node*newnode(int key){
    struct node* NODE=malloc(sizeof(struct node));
    NODE->key=key;
    NODE->left=NULL;
    NODE->right=NULL;
    return NODE;
}
int main(){
    struct node*root=newnode(10);
    root->left=newnode(5);
    root->right=newnode(6);
printf("root:%d\n",root->key);
printf("root left:%d\n",root->left->key);
printf("root right:%d\n",root->right->key);
printf("root left->left:%d",root->left->left);


}