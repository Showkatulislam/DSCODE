#include<stdio.h>

typedef struct Node node;
struct Node{
    node *lchild;
    int data;
    node *rchild;
}*root=NULL;
void insert(int data){
    node *t=root;
    node *p,*r;
    if(root==NULL)
    {
       p=(node*)malloc(sizeof(node));
       p->data=data;
       p->lchild=p->rchild=NULL;
       root=p;
       return;
    }
    while(t){
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
    insert(55);
    insert(11);
    insert(33);
    insert(22);
    insert(5);
    Inorder(root);
}
