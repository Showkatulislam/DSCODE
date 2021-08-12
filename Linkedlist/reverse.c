#include<stdio.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
}*head;
void Revese1(node *p){
    node *r=NULL,*q=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}
int count(){
    node *p=head;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
void Revese2(node *p){
    node *q=p;
    int *a,i=0;
    a=(int*)malloc(sizeof(int)*count());
    while(q!=NULL){
        a[i]=q->data;
        q=q->next;
        i++;
    }
    i--;
    q=p;
    while(q!=NULL){
        q->data=a[i];
        q=q->next;
        i--;
    }

}
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
}void rdisplay(node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        rdisplay(p->next);
    }
}
int main(){
    int a[]={11,22,33,33,44,55};
    create(a,6);
    Revese2(head);
    rdisplay(head);
}


