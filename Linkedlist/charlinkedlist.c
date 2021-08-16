
#include<stdio.h>

typedef struct Node node;
struct Node{
    char data;
    node *next;
}*head;
void Create(char a[],int n){
    node *last,*temp;
    int i;
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
void display(node *p){
    if(p!=NULL){
        printf("%c ",p->data);
        display(p->next);
    }
}
int main(){
    char a[]="showkatul";
    Create(a,9);
    display(head);
}
