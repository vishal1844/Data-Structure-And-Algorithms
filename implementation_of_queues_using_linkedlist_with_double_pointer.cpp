#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef struct node{
    int data;
    struct node*next;
}nodetype;
void enqueue(nodetype**rear,nodetype**front){
    nodetype*p=(nodetype*)malloc(sizeof(nodetype));
    int key;
    cout<<"enter the key ";
    cin>>key;
    if(p!=NULL){
        p->data=key;
        p->next=NULL;
    }
    if((*rear==NULL)&&(*front==NULL)){
        *rear=p;
        *front=p;
    }
    else{
        (*rear)->next=p;
        *rear=p;
    }
}
void dequeue(nodetype**rear,nodetype**front){
    nodetype*temp=*front;
    printf("delete element is %d\n",(*front)->data);
    if(*front==*rear){ *front=*rear=NULL;}
    *front=(*front)->next;
    free(temp);
}
void display(nodetype*front){
    nodetype*temp=front;
    cout<<"the linked list is ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int ch,t=1;
    nodetype*rear=NULL;
        nodetype*front=NULL;
    do{
        cout<<"\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n";
        cout<<"enter the choice ";
        cin>>ch;
       // nodetype*rear=NULL;
        //nodetype*front=NULL;
        switch(ch){
            case 1:
            enqueue(&rear,&front);
            break;
            case 2:
            //cout<<front->data<<endl;
            if(front==NULL)
            cout<<"queues is empty ";
            dequeue(&rear,&front);
            break;
            case 3:
            if(front==NULL)
            cout<<"queues is empty\n";
            cout<<"the peek is "<<front->data<<endl;
            break;
            case 4:
            display(front);
            break;
            case 5:
            printf("exit");
            
        }
    }while(ch!=5);
    return 0;
}