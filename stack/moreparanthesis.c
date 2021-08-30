#include<stdio.h>

typedef struct Stack stack;

struct Stack{
    int size;
    int top;
    char *S;
};
void push(stack *st,int data){
    if(st->top==st->size-1)
        printf("stack is overflow\n");
    else{
        st->top++;
        st->S[st->top]=data;
    }
}
void pop(stack *st){

    if(st->top==-1){
        printf("stack is underflow\n");
    }else{
        st->top--;
    }
}
int  isEmpty(stack st){
    if(st.top==-1)
        return -1;
    else
        return 1;
}
int isBalance(char *exp){
    int i;
    stack st;
    st.size=strlen(exp);
    st.top=-1;
    st.S=(char*)malloc(st.size*sizeof(char));
    for(i=0;i<st.size;i++){
        if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
            push(&st,exp[i]);
        else if(exp[i]=='}' || exp[i]==')' || exp[i]==']'){
            if(isEmpty(st)==-1)
                return -1;
            else{
                pop(&st);
            }
        }
    }
    if(isEmpty(st)==-1)return 1;
    else return -1;
}
int main(){
    char *exp="[{(a+b)-c}*e]";
    printf("%d",isBalance(exp));

}
