#include<stdio.h>

typedef struct Queue queue;

struct Queue{
    int size;
    int front ;
    int rear;
    int *A;
};
void create(queue *p,int size){
    p->size=size;
    p->A=(int*)malloc(size*sizeof(int));
    p->front=p->rear=-1;
}
void enqueue(queue *q,int data)
{
    if(q->rear==q->size-1)
    {
        printf("Queue is Full");
    }else{
        q->rear++;
        q->A[q->rear]=data;
    }
}
int dequeue(queue *q){
    int x=-1;
    if(q->front==q->rear){
        printf("Queue is Empty");
    }else{
        q->front++;
        x=q->A[q->front];
    }
    return x;
}
void display(queue q){
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    {
        printf("%d ",q.A[i]);
    }
    printf("\n");
}

int main(){
    queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);enqueue(&q,30);enqueue(&q,40);
    display(q);
    printf("%d\n",dequeue(&q));
    display(q);
    printf("%d\n",dequeue(&q));
    display(q);

}
