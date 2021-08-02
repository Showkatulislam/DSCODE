#include<stdio.h>
typedef struct array arr;
struct array
{
    int A[20];
    int size;
    int len;
};
int Get(arr a,int index)
{
    if(index>=0 && index<a.len)
        return a.A[index];
}
void Set(arr *a,int data)
{
    if(a->len<a->size)
    {
        a->A[a->len++]=data;
    }
}
void display(arr a)
{
    int i;
    for(i=0;i<a.len;i++)
        printf("%d ",a.A[i]);
    printf("\n");
}
int Max(arr a)
{
    int i;
    int max=a.A[0];
    for(i=0;i<a.len;i++)
    {
        if(a.A[i]>max)
            max=a.A[i];
    }
    return max;

}

void revareA(arr a)
{
    int i;
    int B[20];
    for(i=0;i<a.len;i++)
    {
        B[i]=a.A[a.len-1-i];
    }
    for(i=0;i<a.len;i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
}

int main()
{
    arr a={{22,33,44,55,6},20,5};
    Set(&a,66);
    display(a);
    revareA(a);
    printf("%d\n",Max(a));
}
