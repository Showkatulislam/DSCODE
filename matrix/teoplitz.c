#include<stdio.h>

typedef struct Max max;

struct Max{
    int *A;
    int s;
};
void Set(max *m,int i,int j,int x){
    if(i==1 && j>0){
        m->A[j-1]=x;
    }
    else if(j==1 && i>1){
        m->A[m->s+i-j-1]=x;
    }

}
void Display(max m){
    int i,j;
    for(i=1;i<=m.s;i++){
        for(j=1;j<=m.s;j++){
            if(j>=i){
                printf("%d ",m.A[j-i]);
            }
            else
                printf("%d ",m.A[m.s+i-j-1]);
        }
        printf("\n");
    }
}
int main()
{
    max m;
    int i,j,x;
    printf("Enter the dimension\n");
    scanf("%d",&m.s);
    m.A=(int*)malloc((2*m.s-1)*sizeof(int));
    for(i=1;i<=m.s;i++){
        for(j=1;j<=m.s;j++){
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
    }
 //   Set(&m,4,1,5);
//    printf("%d",m.A[5]);
     Display(m);


}
