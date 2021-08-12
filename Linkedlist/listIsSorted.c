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
int isSorted(){
    node *p;
    p=head;
    int x=head->data;
    while(p!=NULL){
    if(p->data<x)
        return -1;
    x=p->data;
    p=p->next;
    }
    return 1;
}
void Display(){
    node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    int A[]={11,22,33,44,55,66,77};
    create(A,7);
    printf("%d",isSorted());
    return 0;
}
