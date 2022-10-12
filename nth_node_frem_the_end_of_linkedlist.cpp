#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
};
void find(node*head){
    int t;
    cout<<"enter the position at the end of the linked list ";
    cin>>t;
    node*temp=head;
    int i=1;
    while(i<t){
        temp=temp->next;
        i++;
    }
    //return temp;
    while(temp->next!=NULL){
        head=head->next;
        temp=temp->next;
    }
    cout<<head->data;
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
        if(head==NULL){
            head=ptr;
            tail=ptr;
        }
        else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    find(head);
    // while(temp->next!=NULL){
    //     temp=temp->next;
    //     head=head->next;
    // }
    // cout<<head->data;
    return 0;
}