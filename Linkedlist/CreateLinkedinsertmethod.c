#include<stdio.h>
typedef struct Node node;
struct Node{
    int data;
    node *next;
}*head;

void insert(int data){
    node *p,*last;
    p=(node*)malloc(sizeof(node));
    p->data=data;
    p->next=NULL;
    if(head==NULL){
        head=p;
        last=head;
    }
    else{
        last->next=p;
        last=p;
    }

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
    insert(44);
    insert(14);
    insert(54);
    Display();
}
