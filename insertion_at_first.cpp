#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
node* insert(node*head)
{
    int key;
    cout<<"enter the insertion key ";
    cin>>key;
    node*ptr=new node();
    if(head==NULL){
        ptr->data=key;
        head=ptr;
        head->next=NULL;
        head->prev=NULL;
    }
    else{
    ptr->data=key;
    ptr->prev=NULL;
    node*temp=head;
    head=ptr;
    head->next=temp;
    temp->prev=head;
   // head->prev=NULL;
    //head=ptr;
    }
    return head;
}
void print(node *head){
    node*temp=head;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    head=temp;
    cout<<endl<<"the reverse linkedlist is "<<endl;
    while(head->next!=NULL){
        head=head->next;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->prev;
    }
}
int main(){
    int t;
    cout<<"enter the number ";
    cin>>t;
    node*head=NULL;
    node *tail=NULL;
    int key;
    while(t--){
        cout<<"enter the key ";
        cin>>key;
        node*ptr=new node();
        ptr->data=key;
        ptr->next=NULL;
        ptr->prev=NULL;
        if(head==NULL){
            head=ptr;
            tail=ptr;
        }
        else{
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
        }
    }
    head=insert(head);
    print(head);
    return 0;
}