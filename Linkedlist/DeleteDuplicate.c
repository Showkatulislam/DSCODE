#include<stdio.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
}*head;
void RemoveD(node *q){
    node *p=q->next;
    while(p!=NULL){
    if(q->data!=p->data){
        q=p;
        p=p->next;
    }
    else{
        q->next=p->next;
        free(p);
        p=q->next;
    }
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
        rdisplay(p->next);
        printf("%d ",p->data);
    }
}
int main(){
    int a[]={11,22,33,33,44,55};
    create(a,6);
    RemoveD(head);
    rdisplay(head);
}

