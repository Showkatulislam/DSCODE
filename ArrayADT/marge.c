#include<stdio.h>
void Marge(int a[],int n,int b[],int m)
{
    int i,j,k;
    static int c[8];
    i=j=k=0;
    while(n<m){
    if(a[i]<b[j])
        c[k++]=a[i++];
    else
        c[k++]=b[j++];
    }
    for(;i<n;i++)
        c[k++]=a[i];
    for(;j<m;j++)
        c[k++]=b[j];
    for(i=0;i<8;i++)
        printf("%d ",c[i]);

}
int main()
{
    int a[]={11,22,33,44};
    int b[]={55,66,77,88};
    Marge(a,4,b,4);

}
