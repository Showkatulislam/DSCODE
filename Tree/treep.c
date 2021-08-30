#include<stdio.h>

#include"Tree.h"

tree *root=NULL;
void  preorder(tree *p){
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

void create()
{
    tree *p;
    int x;
    printf("Enter Root Value:");
    scanf("%d",&x);
    root=(tree*)malloc(sizeof(tree));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(root);
    while(!isEmpty())
    {
        p=dequeue();
        printf("Enter left child %d :",p->data);
        scanf("%d",&x);
        Lchild(p,x);
        printf("Enter right child %d :",p->data);
        scanf("%d",&x);
        Rchild(p,x);
    }
}
void Lchild(tree *q,int data)
{
    if(data!=-1){
        tree *temp=(tree*)malloc(sizeof(tree));
        temp->data=data;
        temp->lchild=temp->rchild=NULL;
        q->lchild=temp;
        enqueue(temp);
    }
}
void Rchild(tree *q,int data)
{
    if(data!=-1){
        tree *temp=(tree*)malloc(sizeof(tree));
        temp->data=data;
        temp->lchild=temp->rchild=NULL;
        q->rchild=temp;
        enqueue(temp);
    }
}
int main()
{
    create();
    preorder(root);
}
