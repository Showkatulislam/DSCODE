#include<stdio.h>
typedef struct Node node;
struct Node{
    int data;
    node *lchild;
    node *rchild;
}*root=NULL;


node *Rinsert(node *p,int data)
{
    node *t;
    if(p==NULL)
    {
        t=(node*)malloc(sizeof(node));
        t->data=data;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(data<p->data)
        p->lchild=Rinsert(p->lchild,data);
    else if(data>p->data)
        p->rchild=Rinsert(p->rchild,data);
    else
        return;
}
node *Insert(node *p,int data)
{
    node *t;
    if(p==NULL){
        t=(node*)malloc(sizeof(node));
        t->data=data;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(data<p->data)
        p->lchild=Insert(p->lchild,data);
    else if(data>p->data)
        p->rchild=Insert(p->rchild,data);
    return;
}
void Inorder(node *p)
{
    if(p){
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}
int main()
{
    root=Insert(root,10);
    Insert(root,44);
    Insert(root,5);
    Insert(root,8);
    Insert(root,30);
    Inorder(root);
}
