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
    for(i=1;i<n;i++)
    {
        temp=(node*)malloc(sizeof(node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    last->next=head;
}
void display(node *p){
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        printf("%d ",p->data);
        display(p->next);
    }
}
void insert(node *p,int index,int x){
    node *temp;
    int i;
    temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    if(index==0){
        if(head==NULL){
           head=temp;
           head->next=head;
        }
        else{
            while(p->next!=head )p=p->next;
            p->next=temp;
            temp->next=head;
            head=temp;
        }
    }else{
        for(i=1;i<index;i++){
            p=p->next;
        }
        temp->next=p->next;
        p->next=temp;

    }
}

int main()
{
    int a[]={1,2,3,4,5,6};
    create(a,6);
    insert(head,0,5);
    display(head);

}
