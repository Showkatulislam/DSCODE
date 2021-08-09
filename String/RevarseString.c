#include<stdio.h>
void revarse(char a[]){
    int i,j;
    char b[20];
    for(i=0;a[i]!='\0';i++)
    {
    }
    i=i-2;
    printf("%d\n",i);
    for(j=0;i>=0;j++,i--)
    {
          b[i]=a[j];
    }
    b[i]='\0';
    printf("%s",b);
    return b;
}
int main()
{
    int i;
    char a[9]="showkatul";
    char *b;
    revarse(a);

}
