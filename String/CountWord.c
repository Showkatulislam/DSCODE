#include<stdio.h>

int main()
{
    char a[]="how are you";
    int word=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '){
            word++;
        }
    }
    printf("Word %d",word+1);
}
