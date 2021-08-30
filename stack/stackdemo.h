typedef struct Node node;
struct Node{
    char data;
    node *next;
}*top=NULL;

void push(char data){
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=top;
    top=temp;
}
char pop(){
    char x;
    node *p;
    p=top;
    x=p->data;
    top=top->next;
    free(p);
    return x;
}

