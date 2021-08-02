#include <stdio.h>
#include <stdlib.h>
typedef struct Array arr;
struct Array
{
    int *A;
    int size;
    int len;
};
void display(arr a)
{
    int i;
    for (i = 0; i < a.len; i++)
        printf("%d", a.A[i]);
}

int main()
{
    arr Arr;
    int i;
    printf("Enter the size of array:\n");
    scanf("%d", &Arr.size);
    Arr.A = (int *)malloc(Arr.size * sizeof(int));
    Arr.len = 0;
    printf("Enter the Length:\n");
    scanf("%d", &Arr.len);
    for (i = 0; i < Arr.len; i++)
        scanf("%d", &Arr.A[i]);
}
