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
void Delete(int pos){
    int x,i;
    node *p,*q;
    if(pos==0){
        p=head;
        while(p->next!=head)p=p->next;
        x=head->data;
        if(p==head){
            free(p);
            head=NULL;
        }
        else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }else{
        p=head;
        for(i=1;i<pos-1;i++)p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
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
int main()
{
    int a[]={1,2,3,4,5,6};
    create(a,6);
    Delete(1);
    display(head);

}
