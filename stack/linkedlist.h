#include<stdio.h>
typedef struct Node node;
struct Node{
    int data;
    node *next;
}*head=NULL,*tail=NULL;

void InsertStart(int  data){
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
void insertTail(int data){
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
int DeleteStart(){
    node *p;
    int x=-1;
    p=head;
    x=p->data;
    head=head->next;
    free(p);
    return x;
}

void display(){
    node *p=head;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

