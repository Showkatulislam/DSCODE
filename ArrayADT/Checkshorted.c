#include<stdio.h>
int isSorted(int a[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            return 1;
    }
    return 0;
}
int main()
{
    int a[]={11,22,33,44,55,66};
    int n=isSorted(a,6);
    printf("%d ",n);
}
