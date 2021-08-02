#include<stdio.h>
typedef struct A arr;
struct A{
    int A[10];
    int size;
    int len;
};
void display(arr a)
{
    int i;
    for(i=0;i<a.len;i++)
        printf("%d ",a.A[i]);
}
void append(arr *a,int data){
    a->A[a->len++]=data;
}
void indexAt(arr *a,int index,int data)
{
    int i;
    for(i=a->len;i>index;i--)
    {
        a->A[i]=a->A[i-1];
    }
    a->A[index]=data;
    a->len++;
}
int main()
{
    arr a={{22,33,44,55},10,4};
    append(&a,33);
    indexAt(&a,3,88);
    display(a);


}
