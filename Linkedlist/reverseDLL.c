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
void display(node *p){
  if(p){
    printf("%d ",p->data);
    display(p->next);
  }
}
void Reverse(node *p){
    node *temp;
    while(p!=NULL){
        temp=p->next;
        p->next=p->pre;
        p->pre=temp;
        p=p->pre;
        if(p!=NULL && p->next==NULL)head=p;
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    create(a,6);
    Reverse(head);
    display(head);
}
