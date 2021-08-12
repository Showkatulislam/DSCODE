
#include<stdio.h>

typedef struct Node node;

struct Node{
    int data;
    node *next;
}*head;
void create(int a[],int n){
    int i;
    node *t,*l;
    head=(node*)malloc(sizeof(node));
    head->data=a[0];
    head->next=NULL;
    l=head;
    for(i=1;i<n;i++){
        t=(node*)malloc(sizeof(node));
        t->data=a[i];
        t->next=NULL;
        l->next=t;
        l=t;
    }
}
int Min(node *p){
    int x=p->data;
    while(p!=NULL){
        if(x>p->data){
            x=p->data;
        }
        p=p->next;
    }
    return x;
}
int Max(node *p){
    int x=0;
    if(p==NULL)
        return 0;
    else{
        x=Max(p->next);
        if(x>p->data)
            return x;
        else
            return p->data;
    }
}
int main(){
    int A[]={40,22,33,44,55,66,77};
    create(A,7);
    printf("%d ",Max(head));
    return 0;
}
