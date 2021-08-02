#include<stdio.h>
typedef struct A arr;
struct A{
    int A[10];
    int size;
    int len;
};
void Delete(arr *a,int index)
{
    int i;
    if(index>=0 && index<a->len)
    {
        for(i=index;i<a->len-1;i++)
            a->A[i]=a->A[i+1];
        a->len--;

    }

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
    Delete(&a,0);
    display(a);


}
