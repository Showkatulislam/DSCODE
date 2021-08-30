#include<stdio.h>

typedef struct Stack stack;
struct Stack{
    int size;
    int top;
    int *A;
};
void push(stack *st,int data){
    if(st->top==st->size-1)
        printf("stack overflow\n");
    else{
        st->top++;
        st->A[st->top]=data;
    }
}
int pop(stack *st){
    int x=-1;
    if(st->top==-1)
        printf("Stack underflow\n");
    else{
        x=st->A[st->top];
        st->top--;
        return x;
    }
}
int peek(stack st){
    int x=-1;
}
void print(stack st){
    int i;
    for(i=0;i<=st.top;i++){
        printf("%d ",st.A[i]);
    }
    printf("\n");
}
int main()
{
    stack st;
    st.size=20;
    st.A=(int*)malloc(st.size*sizeof(int));
    st.top=-1;
    push(&st,33);
    push(&st,55);
    push(&st,88);
    push(&st,99);
    printf("%d \n",pop(&st));
    printf("%d \n ",pop(&st));
    printf("%d \n",pop(&st));
    printf("%d \n",pop(&st));
    printf("%d \n",pop(&st));
}
