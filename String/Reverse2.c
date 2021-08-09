#include<stdio.h>
void Reverse(char a[]){

    int i,j;
    char ch;
    for(j=0;a[j]!='\0';j++)
    {
        printf("%d\n",j);
    }
    j=j-1;
    i=0;
    while(i<j){
        ch=a[i];
        a[i]=a[j];
        a[j]=ch;
        i++;
        j--;
    }
    printf("%s",a);

}
int main(){
    char name[]="showkatul";
    Reverse(name);

}
