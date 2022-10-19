#include<bits/stdc++.h>
#include<iostream>
//#include<stdio.h>
 using namespace std;
 typedef struct node{
    int data;
    struct node*next;
}nodetype;
nodetype* enqueue(nodetype*rear){
    int key;
    cout<<"enter the key ";
    cin>>key;
    nodetype*p=new nodetype();
    p->data=key;
    p->next=NULL;
    if(rear==NULL){
        rear=p;
    }
    else{
        (rear)->next=p;
        rear=p;
    }
}
void display(nodetype*front){
    cout<<"the linked list is ";
    while(front!=NULL){
        cout<<front->data<<" ";
        front=front->next;
    }
}
int main(){
    int ch,i;
    nodetype*rear=NULL;
    nodetype*front=NULL;
    do{
        cout<<"1.rear\n2.display\n3.display\n";
        cout<<"enter the choice ";
        cin>>ch;
        switch(ch){
            case 1:
            rear=enqueue(rear);
            if(front==NULL) front=rear;
            break;
            case 2:
            display(front);
            break;
        }
        // cout<<"do u want to continue ";
        // cin>>i;
    }while(ch!=2);
return 0;
}

