#include<stdio.h>
#include"Treelib.h"
int Count(tree *p){
    int x,y;
    if(p){
        x=Count(p->lchild);
        y=Count(p->rchild);
        return x+y+1;
    }
    return 0;
}
int BothDegree(tree *p){
    int x,y;
    if(p){
        x=Count(p->lchild);
        y=Count(p->rchild);
        if(p->lchild && p->rchild)
            return x+y+1;
        else
            return x+y;
    }
}
int Height(tree *p)
{
    int x=0,y=0;
    if(root==NULL)
        return;
    x=Height(p->lchild);
    y=Height(p->rchild);
    if(x>y)
        return x+1;
    else
        return y+1;
}
int LeafNode(tree *p)
{
    int x,y;
    if(p){
        x=LeafNode(p->lchild);
        y=LeafNode(p->rchild);
        if(p->lchild==NULL && p->rchild==NULL)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}
int main()
{
    create();
    printf("count %d ",Count(root));
}
