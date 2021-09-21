#include<stdio.h>
typedef struct Node node;
struct Node
{
    node *lchild;
    int data;
    node *rchild;
}*root;

node *insert(node *p,int data)
{
    node *temp;
    if(p==NULL)
    {
        temp=(node*)malloc(sizeof(node));
        temp->data=data;
        temp->lchild=temp->rchild=NULL;
        return temp;
    }
    if(data<p->data)
        p->lchild=insert(p->lchild,data);
    else if(data>p->data)
        p->rchild=insert(p->rchild,data);
    return p;
}
node *Inpre(node *p)
{
    while(p && p->lchild){
        p=p->lchild;
        return p;
    }
}
node *inSec(node *p)
{
    while(p && p->rchild){
        p=p->rchild;
        return p;
    }
}
int Height(node *p)
{
    int x,y;
    if(p==NULL)return 0;
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;
}
node *Delete(node *p,int key)
{   node *q;
    if(p==NULL)
        return NULL;
    if(p->lchild==NULL &&p->rchild==NULL){
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }

    if(key<p->data)
        p->lchild=Delete(p->lchild,key);
    else if(key>p->data)
        p->rchild=Delete(p->rchild,key);
    else{
        if(Height(p->lchild)>Height(p->rchild))
        {
            q=Inpre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }else{
            q=inSec(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }

    }
}
void inorder(node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}
int main()
{
    root=insert(root,44);
    insert(root,8);
    insert(root,24);
    insert(root,34);
    insert(root,4);
    Delete(root,34);
    inorder(root);
}
