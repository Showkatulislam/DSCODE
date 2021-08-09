#include<stdio.h>
int Compare(char a[],char b[]){
    int i,j;
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
    {
        printf("%c\n",a[i]);
        if(a[i]!=b[j])
            return -1;
    }
    return 1;

}
int main(){
    char a[]="showkatul";
    char b[]="Islam";
    printf("%d",Compare(a,b));
}
