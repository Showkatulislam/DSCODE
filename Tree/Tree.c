#include<stdio.h>
#include"Tree.h"
tree *root=NULL;
void  preorder1(tree *p){
    tree *q;
    printf("root %d \n",p->data);
    enqueue(p);
    while(!isEmpty()){
        q=dequeue();
        if(q->lchild!=NULL){
            printf("Left child %d ",q->lchild->data);
            enqueue(q->lchild);
        }
        if(q->rchild!=NULL){
            printf("Right child %d ",q->rchild->data);
            enqueue(q->rchild);
        }
        printf("\n");
    }
}
void preorder(tree *p)
{
    if(p)
    {
        printf("%d",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void create()
{
    tree *p,*t;
    int x;
    printf("Enter root value\n");
    scanf("%d",&x);
    root=(tree*)malloc(sizeof(tree));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(root);
    while(!isEmpty()){
           p=dequeue();
           printf("Enter left child value %d \n",p->data);
           scanf("%d",&x);
           createLchild(p,x);
           printf("Enter Right child value %d \n",p->data);
           scanf("%d",&x);
           createRchild(p,x);
    }
}
void createLchild(tree *p,int x)
{
    tree *t;
    if(x!=-1){
      t=(tree*)malloc(sizeof(tree));
      t->data=x;
      t->lchild=t->rchild=NULL;
      p->lchild=t;
      enqueue(t);
    }
}
void createRchild(tree *p,int x)
{
    tree *t;
    if(x!=-1){
      t=(tree*)malloc(sizeof(tree));
      t->data=x;
      t->lchild=t->rchild=NULL;
      p->rchild=t;
      enqueue(t);
    }
}
int main()
{
    create();
    preorder1(root);

}
