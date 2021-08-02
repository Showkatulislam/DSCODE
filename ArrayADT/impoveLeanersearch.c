#include<stdio.h>
typedef struct A arr;
struct A{
    int A[10];
    int size;
    int len;
};
void swep(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int LinearS(arr *a,int data)
{
    int i;
    for(i=0;i<a->len;i++)
    {
        if(a->A[i]==data)
        {
            swep(&a->A[i],&a->A[i-1]);
            return i-1;
        }
    }
    return -1;
}
void display(arr a)
{
    int i;
    for(i=0;i<a.len;i++)
        printf("%d ",a.A[i]);
}

int main()
{
    arr a={{22,33,44,55},10,4};
    printf("%d",LinearS(&a,44));

}
