#include<stdio.h>
void swap(int var1,int var2)
{
    int temp;
    temp=var1;
    var1=var2;
    var2=temp;
}
void Revarse(int a[],int n)
{
    int i,j;
    int temp;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main()
{
    int a[]={22,33,44,55,66};
    Revarse(a,5);
    display(a,5);
}
