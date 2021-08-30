#include<stdio.h>
#include"stackdemo.h"

char *postfixconvert(char *infix){
    char *postfix;
    int len=strlen(infix);
    postfix=(char*)malloc((len+1)*sizeof(char));
    int i=0,j=0;
    while(i<len){
        if(infix[i]){
            postfix[j++]=infix[i++];
        }else{
            if()
        }
    }

}
int main()
{

}
