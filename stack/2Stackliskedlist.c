#include<stdio.h>
typedef struct Stack stack;
struct Stack{
    int data;
    int *next;
}*top=NULL;
void push(int data){
    stack *t;
    t=(stack*)malloc(sizeof(stack));
    if(t==NULL)printf("Stack Overflow\n");
    else{
        t->data=data;
        t->next=top;
        top=t;
    }
}
int pop(){
    int x=-1;
    stack *p;
    if(top==NULL)printf("stack is underflow\n");
    else{
        x=top->data;
        p=top;
        top=top->next;
        free(p);
    }
    return x;
}
int peek(pos){
    int i;
    stack *p=top;
    for(i=1;p!=NULL && i<pos;i++){
        p=p->next;
    }
    if(p!=NULL)
        return p->data;
    else
        return -1;

}
int StackTop(){
    if(top)
        return top->data;
    else
        return -1;
}
int main(){

    push(55);
    push(22);
    push(33);

    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());

}
