#include<stdio.h>
typedef struct Matrix matrix;
struct Matrix{
    int *A;
    int n;
};
void Set(matrix *m,int i,int j,int x){
    if(j>=i)
        m->A[(j+(j-1))/2+i-1]=x;
}
void Display(matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(j>=i){
                printf("%d ",m.A[(j+(j-1))/2+i-1]);
            }
            else{
                printf("0 ");
            }
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
    m.A=(int*)malloc((m.n*(m.n+1)/2)*sizeof(int));
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            Set(&m,i,j,x);

        }
    }
    Display(m);
}
