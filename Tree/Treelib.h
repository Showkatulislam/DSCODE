#include<stdio.h>
#include"Tree.h"

tree *root=NULL;

void create(){
    tree *p,*temp;
    int x;
    printf("Enter root value:");
    scanf("%d",&x);
    root=(tree*)malloc(sizeof(tree));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(root);
    while(!isEmpty()){
        p=dequeue();
        Lchild(p);
        Rchild(p);
    }

}
void Lchild(tree *p)
{   int x;
    tree  *temp;
    printf("Enter the Left child %d\n",p->data);
    scanf("%d",&x);
    if(x!=-1){
        temp=(tree*)malloc(sizeof(tree));
        temp->data=x;temp->lchild=temp->rchild=NULL;
        p->lchild=temp;
        enqueue(temp);
    }
}
void Rchild(tree *p){
    int x;
    tree  *temp;
    printf("Enter the Right child %d\n",p->data);
    scanf("%d",&x);
    if(x!=-1){
        temp=(tree*)malloc(sizeof(tree));
        temp->data=x;temp->lchild=temp->rchild=NULL;
        p->rchild=temp;
        enqueue(temp);
    }
}
void Inorder(tree *p){
    if(p){
        printf("%d ",p->data);
        Inorder(p->lchild);
        Inorder(p->rchild);
    }
}
int height(tree *p){
    int count=0;
    while(p){
        p=p->lchild;
        count++;
    }
    return count-1;
}
void propertity(){
    printf("Create Tree\n");
    printf("InOrder Traversal\n");
    printf("Measure height\n");
}

