#include<stdio.h>

void Revarse(int a[],int n)
{
    int b[100],i,j;
    for(i=0,j=n-1;i<n;i++,j--)
    {
        printf("%d\n",a[j]);
        b[i]=a[j];
    }
    display(b,n);
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main()
{
    int a[]={22,33,444,555};
    Revarse(a,4);
    return 0;
}
