#include<stdio.h>
typedef struct Tree tree;
struct  Tree{
    int data;
    tree *lchild;
    tree *rchild;
};
typedef struct Node node;
struct Node{
    tree *data;
    node *next;
}*head=NULL,*tail=NULL;

void InsertStart(tree  *data){
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=tail=temp;
    }else{
        temp->next=head;
        head=temp;
    }
}
void insertTail(tree *data){
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
tree *DeleteStart(){
    node *p;
    tree *x=NULL;
    p=head;
    x=p->data;
    head=head->next;
    free(p);
    return x;
}
void enqueue(tree *p){
    insertTail(p);
}
tree *dequeue()
{
    return DeleteStart();
}
int isEmpty(){
    if(head==NULL)
        return 1;
    else
        return 0;
}

void display(){
    node *p=head;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}


