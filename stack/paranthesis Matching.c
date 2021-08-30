#include<stdio.h>

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
void print(stack st){
    int i;
    for(i=0;i<=st.top;i++){
        printf("%d ",st.A[i]);
    }
    printf("\n");
}
int inBalance(char *exp)
{
    int i;
    stack st;
    st.size=strlen(exp);
    st.top=-1;
    st.A=(char*)malloc(st.size*sizeof(char));
    for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='(')
            push(&st,exp[i]);
        else if(exp[i]==')'){
            if(isEmpty(st)==1)return -1;
            pop(&st);
        }
    }
    if(isEmpty(st)==0) return -1;
    else
        return 1;

}
int main(){
    char *exp="((__))(";
    printf("%d",inBalance(exp));
}
