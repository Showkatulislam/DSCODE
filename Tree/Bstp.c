#include<stdio.h>

typedef struct Node node;
struct Node
{
    int data;
    node *lchild;
    node *rchild;
}*root;

void insert(int data)
{
    node *t=root;
    node *p,*r;
    if(t==NULL)
    {
        p=(node*)malloc(sizeof(node));
        p->data=data;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t)
    {
        r=t;
        if(data<t->data)
            t=t->lchild;
        else if(data>t->data)
            t=t->rchild;
        else
            return;
    }
    p=(node*)malloc(sizeof(node));
    p->data=data;
    p->lchild=p->rchild=NULL;
    if(data<r->data)
        r->lchild=p;
    else
        r->rchild=p;
}
void inOrder(node *p)
{
    if(p)
    {
        inOrder(p->lchild);
        printf("%d ",p->data);
        inOrder(p->rchild);
    }
}
int pre(node *p)
{
    while(p && p->lchild)
    {
        p=p->lchild;
    }
    return p->data;
}
int main()
{
    insert(12);
    insert(5);
    insert(2);
    insert(1);
    insert(3);
    insert(6);
    printf("%d",pre(root));

}
