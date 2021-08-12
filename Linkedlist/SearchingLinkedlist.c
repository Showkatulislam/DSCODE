#include<stdio.h>

typedef struct Node node;

struct Node{
    int data;
    node *next;
}*head;
int improveSearch(node *p,int data){
    node *q=NULL;
    while(p!=NULL){
        if(data==p->data)
        {
            q->next=p->next;
            p->next=head;
            head=p;
        }
        q=p;
        p=p->next;
    }
    return 1;
}
void Create(int a[],int n){

    int i;
    node *temp,*last;
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
int Search(node *p,int data){
    while(p!=NULL){
        if(data==p->data)
            return 1;
        p=p->next;
    }
    return -1;
}
int rSearch(node *p,int data){
    if(p==NULL)
        return 0;
    if(p->data==data)
        return 1;
    return rSearch(p->next,data);
}
void Display(){
    node *i;
    i=head;
    while(i!=NULL){
        printf("%d ",i->data);
        i=i->next;
    }
}
int main(){
    int a[]={11,22,33,44,55};
    Create(a,5);
    printf("%d ",improveSearch(head,33));
    Display();

}
