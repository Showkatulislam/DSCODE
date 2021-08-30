#include<stdio.h>

#include"linkedlist.h"
void push(int data){
    InsertStart(data);
}
int pop(){
    return DeleteStart();
}
int pre(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}
int solvePostfix(char *infix){

    int i,x2,x1,r;
    for(i=0;infix[i]!='\0';i++){
        if(pre(infix[i]))
            push(infix[i]-'0');
        else{
            x2=pop();
            x1=pop();
            switch(infix[i]){
                case '+':r=x1+x2;break;
                case '-':r=x1-x2;break;
                case '*':r=x1*x2;break;
                case '/':r=x1/x2;break;
            }
            push(r);
        }
    }
    return head->data;
}
int main()
{
    char *postfix="432+*";
    printf("%d",solvePostfix(postfix));
}
