#include<stdio.h>
#include"Treelib.h"

void inorder(tree *t){
    while(t!=NULL || !isEmpty()){
        if(t){
            push(t);
            t=t->lchild;
        }else{
            t=pop();
            printf("%d ",t->data);
            t=t->rchild;
        }
    }
}
int main()
{
    create();
    inorder(root);
}
