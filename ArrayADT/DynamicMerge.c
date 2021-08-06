
#include<stdio.h>
typedef struct Arr array;
struct Arr{
    int A[20];
    int len;
    int size;
};
void display(array arr)
{
    int i;
    for(i=0;i<arr.len;i++)
        printf("%d ",arr.A[i]);
}
array* Merge(array *arr1,array *arr2)
{
    int i,j,k;
    i=j=k=0;
    array *arr3=(array*)malloc(sizeof(array));
    while(i<arr1->len && j<arr2->len)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->len;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->len;j++)
        arr3->A[i++]=arr2->A[j];
    arr3->len=arr1->len+arr2->len;
    arr3->size=14;
    return arr3;

}
int main()
{
   array a={{2,6,10,15,25},5,20};
   array b= {{3,4,7,18,20},5,20};
   array *c;
   c=Merge(&a,&b);
   display(*c);
}
