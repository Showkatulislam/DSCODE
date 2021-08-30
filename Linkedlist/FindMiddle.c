#include<stdio.h>
#include <math.h>
typedef struct Node node;
struct Node{
    int data;
    node *next;
}*head;
void create(int a[],int len){
    int i;
    node *last,*temp;
    head=(node*)malloc(sizeof(node));
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(i=1;i<len;i++){
        temp=(node*)malloc(sizeof(node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
int MidNode(){
    node *p=head;
    int i,len,mid;
    len=Len();
    mid=ceil(len/2);
    printf("%d ",mid);
    for(i=0;i<2;i++){
        p=p->next;
    }
    return p->data;
}
void MidNode1(){
    node *p,*q;
    p=q=head;
    while(p){
        p=p->next;
        if(p)p=p->next;
        if(p)q=q->next;
    }
    printf("%d ",q->data);
}
int Len(){
    int len=0;
    node *p=head;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void display(){
    node *p=head;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    int a[]={11,22,33,44,55};
    create(a,5);
    printf("%d ",MidNode());
    MidNode1();

}

