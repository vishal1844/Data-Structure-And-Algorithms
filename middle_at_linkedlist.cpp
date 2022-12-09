#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
};
void middle(node*head){
    while(head->next!=NULL){
        head=head->next;
    }
    node*slow=head;
    node*fast=head;
    int i=0;
    while(fast->prev&&fast->prev->prev!=NULL){
        fast=fast->prev->prev;
        slow=slow->prev;
        i++;
    }
    cout<<"the middle linkedlist is "<<slow->data;
}
int main(){
    int t;
    cout<<"enter the number ";
    cin>>t;
    node*head=NULL;
    node*tail=NULL;
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
    middle(head);
    return 0;
}