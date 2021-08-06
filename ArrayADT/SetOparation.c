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
array* Union(array *arr1,array *arr2)
{
    int i,j,k;
    i=j=k=0;
    array *arr3=(array*)malloc(sizeof(array));
    while(i<arr1->len && j<arr2->len)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++]=arr2->A[j++];
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->len;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->len;j++)
        arr3->A[i++]=arr2->A[j];
    arr3->len=k;
    arr3->size=14;
    return arr3;
}
array* Intersection(array *arr1,array *arr2)
{
    int i,j,k;
    i=j=k=0;
    array *arr3=(array*)malloc(sizeof(array));
    while(i<arr1->len && j<arr2->len)
    {
        if(arr1->A[i]<arr2->A[j])
            i++;
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else{
                arr3->A[k++]=arr1->A[i++];
                j++;
            }
    }
    arr3->len=k;
    arr3->size=20;
    return arr3;
}
array* Difference(array *arr1,array *arr2)
{
    int i,j,k;
    i=j=k=0;
    array *arr3=(array*)malloc(sizeof(array));
    while(i<arr1->len && j<arr2->len)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->len;i++)
        arr3->A[k++]=arr1->A[i];
    arr3->len=k;
    arr3->size=14;
    return arr3;
}
int main()
{
   array a={{2,6,10,15,25},5,20};
   array b= {{3,4,7,15,20},5,20};
   array *c;
   c=Difference(&a,&b);
   display(*c);
}
