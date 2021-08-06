#include<stdio.h>

void max(int a[],int n)
{
    int max1,max2,i;
    max1=max2=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
    }
    printf("%d %d",max1,max2);
}

int main()
{
    int a[]={11,22,3,34,5,5};
    max(a,6);

}
