#include<stdio.h>
#include"stackdemo.h"
int Isoparand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}
int pre(char x){
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else
        return 0;
}
char *Postfix(char *infix){
    char *postfix;
    postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(Isoparand(infix[i]))
            postfix[j++]=infix[i++];
        else{
            if(pre(infix[i])>pre(top->data))
                push(infix[i++]);
            else{
                postfix[j++]=pop();
            }
        }
    }
    while(top){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}

int main()
{
    char *infix="a+b*c";
    push('#');
    printf("%s",Postfix(infix));
}
