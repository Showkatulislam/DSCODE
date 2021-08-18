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
void insertNode(int value ,int index){
    node *p=head,*temp;
    int i;
    temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->next=NULL;
    for(i=1;i<index;i++){
        p=p->next;
    }
    temp->next=p->next;
    p->next=temp;

}
void rdisplay(node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        printf("%d ",p->data);
        rdisplay(p->next);
    }
}
int main(){
 node *p,*q;
 int a[]={1,2,3,4,5};
 create(a,5);
 p=head->next->next->next->next;
 q=head;
 p->next=q;
 insertNode(66,3);
 rdisplay(head);
}
