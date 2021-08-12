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
void Display(){
    node *i;
    i=head;
    while(i!=NULL){
        printf("%d ",i->data);
        i=i->next;
    }

}
void rdisplay(node *p){
    if(p!=NULL){
        rdisplay(p->next);
        printf("%d ",p->data);
    }
}
int main(){
    int A[]={11,22,33,44,55,66,77};
    create(A,7);
    rdisplay(head);
    return 0;
}
