#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void middle(node *head){
    node*slow=head;
    node*fast=head;
    /*while(slow&&fast->next&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }*/
    while(head&&fast&&fast->next!=NULL){
        head=head->next;
        fast=fast->next->next;
    }
    cout<<head->data;
}
int main()
{
    int t;
    cout<<"enter the number ";
    cin>>t;
    node*head=NULL;
    node*tail=NULL;
    while(t--){
        int key;
        cout<<"enter the key ";
        cin>>key;
        node *ptr=new node();
        ptr->data=key;
        ptr->next=NULL;
        if(head==NULL){
            head=ptr;
            tail=ptr;
        }
        else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    middle(head);
    return 0;
}

