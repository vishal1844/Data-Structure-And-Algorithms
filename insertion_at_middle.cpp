#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node*prev;
};
void insert(node*head){
    int key;
    cout<<"enter the insertion key ";
    cin>>key;
    node*ptr=new node();
    int t;
    cout<<"enter the position to insert the key ";
    cin>>t;
    int count=1;
    while(count<t-1){
        head=head->next;
        count++;
    }
    node*temp=head->next;
    ptr->data=key; 
    head->next=ptr;
    ptr->prev=head;
    ptr->next=temp;
    temp->prev=ptr;
}
void print(node *head){
    node*temp=head;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl<<"the reverse insertion key is "<<endl;
    head=temp;
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
    int key;
    node*head=NULL;
    node*tail=NULL;
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
    insert(head);
    print(head);
    return 0;
}