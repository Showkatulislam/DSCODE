#include<stdio.h>

typedef struct Node node;

struct Node{
    int data;
    node *next;
}*head;
void create(int a[],int n){
    int i;
    node *t,*l;
    head=(node*)malloc(sizeof(node));
    head->data=a[0];
    head->next=NULL;
    l=head;
    for(i=1;i<n;i++){
        t=(node*)malloc(sizeof(node));
        t->data=a[i];
        t->next=NULL;
        l->next=t;
        l=t;
    }
}
void insert(int data,int pos){
    node *p,*temp;
    p=head;
    int i;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    for(i=0;i<pos-1;i++){
        p=p->next;
    }
    temp->next=p->next;
    p->next=temp;

}
void Display(){
    node *i;
    i=head;
    while(i!=NULL){
        printf(" %d ",i->data);
        i=i->next;
    }
}
int main()
{
    int a[]={11,22,33,44,55};
    create(a,5);
    insert(12,0);
    Display();

}
