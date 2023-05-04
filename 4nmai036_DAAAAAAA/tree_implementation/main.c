#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    struct NODE *left;
    struct NODE *right;
    int data;
}*node;

node getnode(int data)
{
    node n=(struct NODE *)malloc(sizeof(struct NODE));
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    return n;
}

void insert(node *root,int data)
{
    if(*root==NULL){
        *root = getnode(data);
        return;
    }
    if((*root)->data>data)
        return insert(&((*root)->left),data);
    return insert(&((*root)->right),data);
}

void inorder(node root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}

int main()
{
    node root;
    root=NULL;
    insert(&root,10);
    insert(&root,20);
    insert(&root,15);
    insert(&root,8);
    inorder(root);
    return 0;
}
