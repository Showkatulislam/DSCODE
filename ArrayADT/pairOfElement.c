#include<stdio.h>

void pairOfElement(int a[],int k,int n)
{
    int i=0,j=n-1;

    while(i<j)
    {
        if(a[i]+a[j]==k){
            printf("%d + %d=%d\n",a[i],a[j],k);
            i++;j--;
        }else if(a[i]+a[j]<k)
        {
            i++;
        }
        else{
            j--;
        }
    }

}

int main()
{
    int a[11]={1,3,4,5,6,8,9,10,11,12,14};
    pairOfElement(a,10,11);

}
