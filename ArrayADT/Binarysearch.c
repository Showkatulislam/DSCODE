#include<stdio.h>
typedef struct A arr;
struct A{
    int A[10];
    int size;
    int len;
};
int BinaryS(arr a,int data)
{
    int low=0;
    int high=a.len-1;
    int mid=0;
    while (low<=high)
    {
    mid=(low+high)/2;
    if(data==a.A[mid])
        return mid;
    else if(data>a.A[mid])
        low=mid+1;
    else
        high=mid-1;
    }
    return -1;
    
}
int main()
{
    arr a={{22,33,44,55},10,4};
    printf("%d",BinaryS(a,33));

}