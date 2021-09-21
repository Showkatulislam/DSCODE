#include<stdio.h>

#include"Treelib.h"

void insert(tree *t,int key)
{
    tree *r=NULL,*p;
    while(t){
        r=t;
        if(key==t->data)
            return;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    p=(tree*)malloc(sizeof(tree));
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(p->data<r->data)
        r->lchild=p;
    else{
        r->rchild=p;
    }
}
int main()
{
    create();
    insert(root,50);
    Inorder(root);


}
