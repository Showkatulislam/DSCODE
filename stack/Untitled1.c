#include<stdio.h>
typedef struct Node node;
struct Node{
    int data;
    node *left;
    node *right;
};
node *create(int data){

    node *new_node=(node*)malloc(sizeof(node));
    if(new_node==NULL){
        printf("Node not create\n");
    }
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}
void left_child(node *root,int data){
    root->left=data;
}
void right_child(node *root,int data){
    root->right=data;
}
int main(){
    node *two=create(2);
    node *sevent=create(7);
    node *nine=create(9);
    left_child(two,sevent);
    right_child(two,nine);

}
