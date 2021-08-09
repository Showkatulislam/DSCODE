#include<stdio.h>

int main()
{
    char a[]="SHOWKATUL";
    int i;
    for(i=0;a[i]!='\0';i++)
        a[i]=a[i]+32;
    puts(a);
}
