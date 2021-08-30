
typedef struct Stack stack;
struct Stack{
    int size;
    int top;
    char *A;
};
void push(stack *st,char data){
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
int peek(stack st,int pos){
    return st.A[st.top+pos+1];
}
int isEmpty(stack st){
    if(st.top==-1)
        return 1;
    else
        return 0;
}
