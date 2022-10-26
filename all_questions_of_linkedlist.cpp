#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    node*next;
}nodetype;
// searching a key in a linked list and remove that key on that position and insert to at first
nodetype* searching(nodetype*head,nodetype*tail){
    nodetype*temp;
    int key,y=0;
    cout<<"enter the searching key ";
    cin>>key;
    tail=head;
    while(tail!=NULL){
        if(tail->data==key){
            cout<<key<<" is found\n ";
            temp->next=tail->next;
            //cout<<temp->next<<endl;
            //cout<<tail->next<<endl;
            //free(tail);
            tail->next=head;
            head=tail;
            //free(tail);
            return head;
        }
        temp=tail;
        tail=tail->next;
    }
    cout<<"element is not found\n ";
    return head;
}
//                           insertion a new node at any position.
void insertion(nodetype*head,nodetype*tail){
    int key;
    cout<<"enter the insertion key ";
    cin>>key;
    int i,j,k,l,t;
    cout<<"enter the insertion position ";
    cin>>t;
    nodetype*p=new nodetype();
    p->data=key;
    p->next=NULL;
    tail=head;
    for(i=1;i<t-1;i++){
        tail=tail->next;
    }
    nodetype*temp=tail->next;
    tail->next=p;
    p->next=temp;
    //return head;
}
void display(nodetype*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int key,i;
    node*head=NULL;
    node*tail=NULL;
    while(1){
        cout<<"enter the key ";
        cin>>key;
        nodetype*p=(nodetype*)malloc(sizeof(nodetype));
        p->data=key;
        p->next=NULL;
        if(head==NULL){
            head=p;
            tail=p;
        }
        else{
            tail->next=p;
            tail=p;
        }
        cout<<"do u want to continue ";
        cin>>i;
        if(i==0) break;
    }
    head=searching(head,tail);
    insertion(head,tail);
    display(head);
    return 0;
}