#include<stdio.h>

int  main()
{
    char *name="showkatul";
    int i;
    int len=0;
    for(i=0;name[i]!='\0';i++)
        len++;
    printf("the length of String %d\n",len);
}
