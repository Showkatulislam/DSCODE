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
void display(){
 node *p=head;
 while(p){
    printf("%d ",p->data);
    p=p->next;
 }
}
int isLoop(){
    node *p,*q;
    p=q=head;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(q && p && p!=q);
    if(q==p)
        return 1;
    else{
        return -1;
    }
}
int main(){
 node *p,*q;
 int a[]={1,2,3,4,5};
 create(a,5);
 p=head->next->next;
 q=head->next->next->next->next;
 q->next=p;
 printf("%d ",isLoop());

}
