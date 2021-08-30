#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
class Stack{
private:
    Node *top;
public:
    Stack(){
    top=NULL;
}
    void push(int data);
    int pop();
    void display();
};
void Stack::push(int data){
    Node *t=new Node;
    if(t==NULL)
        cout<<"stack is full";
    else{
        t->data=data;
        t->next=top;
        top=t;
    }
}

int Stack::pop(){
    int x=-1;
    if(top==NULL)
        cout<<"stack is Empty";
    else{
        x=top->data;
        Node *t=top;
        top=top->next;
        delete t;
    }
    return x;
}
void Stack::display(){
    Node *p=top;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    Stack stk;
    stk.push(55);
    stk.push(40);
    stk.push(30);
    stk.push(20);
    stk.display();
}
