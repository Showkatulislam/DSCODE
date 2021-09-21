#include<stdio.h>
#include"Treelib.h"
void preOrder(tree *temp){
    while(temp || !isEmpty())
    {
        if(temp){
            printf("%d ",temp->data);
            push(temp);
            temp=temp->lchild;
        }else{
            temp=pop();
            temp=temp->rchild;
        }
    }

}
int main()
{
    create();
    preOrder(root);
}
