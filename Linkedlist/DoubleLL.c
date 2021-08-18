#include<stdio.h>

typedef struct Node node;

struct Node{
    int data;
    node *next;
    node *pre;
}*head;

void create(int a[],int n){
    node *temp,*last;
    int i;
    head=(node*)malloc(sizeof(node));
    head->data=a[0];
    head->pre=head->next=NULL;
    last=head;
    for(i=1;i<n;i++){
        temp=(node*)malloc(sizeof(node));
        temp->data=a[i];
        temp->pre=last;
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}
void InsertF(int data){
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->pre=NULL;
    temp->next=head;
    head->pre=temp;
    head=temp;
}
void InserAnyIndex(int pos,int data){
    int i;
    node *temp,*p=head;
    for(i=1;i<pos-1;i++){
        p=p->next;
    }
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->pre=p;
    temp->next=p->next;
    p->next=temp;
    p->next->pre=temp;

}
void display(node *p){
  if(p){
    printf("%d ",p->data);
    display(p->next);
  }
}
int Length(node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}

int main(){
    int a[]={1,2,3,4,5,6};
    create(a,6);
    printf("%d \n",Length(head));
    InsertF(55);
    InserAnyIndex(4,100);
    display(head);
}
