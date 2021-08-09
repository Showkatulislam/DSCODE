#include<stdio.h>
typedef struct Matrix matrix;
struct Matrix{
    int *A;
    int n;
};
void Set(matrix *m,int i,int j,int x){
    if(i>=j)
        m->A[(i*(i+1))/2+j-1]=x;
}
int Get(matrix m,int i,int j){
    if(i>=j)
        return m.A[(i*(i+1))/2+j-1];
    return 0;
}
void Display(matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){
                printf("%d ",m.A[(i*(i+1))/2+j-1]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    matrix m;
    int i,j,x;
    printf("Enter Dimension\n");
    scanf("%d",&m.n);
    m.A=(int*)malloc(m.n*(m.n+1)/2*sizeof(int));
    printf("Enter all Element \n");
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
    }
    printf("\n");
    Display(m);
}
