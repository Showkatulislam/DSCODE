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
int Length(node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
int Delete(pos){
    node *p=head;
    int x=-1,i;
    if(pos<1 || pos>Length(p))
        return -1;
    if(pos==1)
    {
        head=head->next;
        if(head)head->pre=NULL;
        x=p->data;
        free(p);
    }else{
        for(i=0;i<pos-1;i++)p=p->next;
        p->pre->next=p->next;
        if(p->next)p->next->pre=p->pre;
        x=p->data;
        free(p);
    }
    return x;
}
int main(){
    int a[]={1,2,3,4,5,6};
    create(a,6);
    printf("%d \n",Length(head));
    printf("%d \n",Delete(2));
    display(head);
}
