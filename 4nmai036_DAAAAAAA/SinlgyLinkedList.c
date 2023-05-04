#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
}*node;

typedef struct 
{
    struct NODE *head;
}list;

node getNODE(int data)
{
    node n=(struct NODE *)malloc(sizeof(struct NODE));
    n->data = data;
    n->link=NULL;
    return n;
}

void insertFront(int data,list *l)
{
    if(l->head==NULL)
    {
        node n=getNODE(data);
        l->head = n;
    }
    node n = getNODE(data);
    n->link = l->head;
    l->head = n;
}

void display(list l)
{
    node n= l.head;
    while(n!=NULL)
    {
        printf("%d\t",n->data);
        n = n->link;
    }
}

int main()
{
    list l;
    l.head = NULL;
    insertFront(10,&l);
    insertFront(20,&l);
    insertFront(30,&l);
    insertFront(40,&l);
    insertFront(50,&l);
    display(l);
    return 0;
}