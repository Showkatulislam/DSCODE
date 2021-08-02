#include<stdio.h>
typedef struct A Arr;
struct A{
    int a[20];
    int size;
    int len;
};
int RBinsearch(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return RBinsearch(a,l,mid-1,key);
        else
            return RBinsearch(a,mid+1,h,key);
    }
    return -1;
}
int main()
{
    Arr arr={{22,33,44,55,66},20,5};

    printf("%d",RBinsearch(arr.a,0,arr.len,33));


}
