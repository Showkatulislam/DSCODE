#include<stdio.h>

typedef struct Node node;
struct Node{
    int data;
    node *next;
}*head;
void create(int a[],int n){
    int i;
    node *last,*temp;
    head=(node*)malloc(sizeof(node));
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(i=1;i<n;i++){
        temp=(node*)malloc(sizeof(node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void Display(){
    node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int count(){
    int c=0;
    node *p=head;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
int del(int index)
{
    node *p,*q;
    p=head;
    int x=-1,i;
    if(index<1 || index>count())
        return -1;
    if(index==1){
        q=head;
        x=head->data;
        head=head->next;
        free(q);
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;

    }

}
int main(){
    int a[]={11,22,33,44,55};
    create(a,5);
    Display();
    printf("\n%d\n",del(1));
    Display();
}
