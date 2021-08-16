#include<stdio.h>

typedef struct Node node;
struct Node{
    int data;
    int *next;
}*head,*second,*third;

void create1(int a[],int n){
    node *last,*t;
    head=(node*)malloc(sizeof(node));
    head->data=a[0];
    head->next=NULL;
    last=head;
    int i;
    for(i=1;i<n;i++){
        t=(node*)malloc(sizeof(node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create2(int a[],int n){
    node *last,*t;
    second=(node*)malloc(sizeof(node));
    second->data=a[0];
    second->next=NULL;
    last=second;
    int i;
    for(i=1;i<n;i++){
        t=(node*)malloc(sizeof(node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void concate(node *p,node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}
void Merge(node *p,node *q){
    node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
}
void rdisplay(node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        rdisplay(p->next);
    }
}
int main()
{
    int a[]={11,22,33,33,44,55};
    int b[]={12,23,34,35,45,55};
    create1(a,6);
    create2(b,6);
    rdisplay(head);
    printf("\n");
    rdisplay(second);
    printf("\nMarge\n");
    Merge(head,second);
    rdisplay(third);

}
