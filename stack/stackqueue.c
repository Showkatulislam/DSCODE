#include<stdio.h>

#include"linkedlist.h"
void push(int data){
    InsertStart(data);
}
int pop(){
    return DeleteStart();
}
void enqueue(int data){
    insertTail(data);
}
int deque(){
    return DeleteStart();
}

int main(){
    enqueue(44);
    enqueue(55);
    enqueue(88);
    printf("%d ",deque());
    printf("%d ",deque());
    printf("%d ",deque());

}
