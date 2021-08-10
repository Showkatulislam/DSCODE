#include<stdio.h>

typedef struct Matrix matrix;

struct Matrix {
    int *M;
    int d;
};
void set(matrix *m,int i,int j,int x){
    if(i-j==1)
        m->M[i-2]=x;
    else if(i-j==0)
        m->M[m->d-1+i-1]=x;
    else if(i-j==-1){
        m->M[2*m->d-1+i-1]=x;
    }
}
void print(matrix m){
    int i,j;
    for(i=1;i<=m.d;i++){
    for(j=1;j<=m.d;j++){
        if(i-j==1)
           printf("%d ",m.M[i-2]);
        else if(i-j==0)
            printf("%d ",m.M[m.d-1+i-1]);
        else if(i-j==-1){
            printf("%d ", m.M[2*m.d-1+i-1]);
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
    printf("Enter dimension\n");
    scanf("%d",&m.d);
    m.M=(int*)malloc((3*m.d-2)*sizeof(int));
    for(i=1;i<=m.d;i++){
        for(j=1;j<=m.d;j++){
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    print(m);
}
