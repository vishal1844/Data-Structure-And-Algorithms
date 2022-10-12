#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void deletes(node *head){
    int t;
    cout<<"enter the position to delete the elements ";
    cin>>t;
    int i=1;
    while(i<t-1){
        head=(head)->next;
        i++;
    }
    node *temp=(head)->next;
    head->next=head->next->next;
    delete(temp);
}
void print(node*head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    int t;
    cout<<"enter the number ";
    cin>>t;
    int key;
    node*head=NULL;
    node *tail=NULL;
    while(t--){
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
    deletes(head);
    print(head);
    return 0;
}