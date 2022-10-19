#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node*next;
}nodetype;
void push(nodetype**top){
    int key;
    cout<<"enter the key ";
    cin>>key;
    nodetype*p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL){
        p->data=key;
        //p->next=NULL;
    }
    p->next=*top;
    *top=p;
}
void pop(nodetype**top){
    nodetype*temp=*top;
    cout<<"the delete element is ";
    printf("%d\n",temp->data);
    *top=(*top)->next;
    free(temp);
}
void display(nodetype*top){
    cout<<"the linked list is ";
    nodetype*temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int ch,i,j,k;
    nodetype*top=NULL;
    do{
        cout<<"1.push\n2.pop\n3.peek\n4.display\n5.exit\n";
        cout<<"enter the choice ";
        cin>>ch;
        switch(ch){
            case 1:
            push(&top);
            break;
            case 2:
            if(top==NULL) cout<<"stack is empty or underflow \n";
            pop(&top);
            break;
            case 3:
            cout<<"the peek element is "<<top->data<<endl;
            break;
            case 4:
            display(top);
            break;
            case 5:
            cout<<"exit\n";
        }
    }while(ch!=5);
    return 0;
}