#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insert1(node**head)
{
    int key;
    cout<<" enter the insertion key at begin ";
    cin>>key;
    node*ptr=new node();
    ptr->data=key;
    ptr->next=NULL;
    ptr->next=* head;
    *head=ptr;
}
void insert(node*head)
{
    int key;
    cout<<"enter the insertion key ";
    cin>>key;
    node*ptr=new node();
    ptr->data=key;
    ptr->next=NULL;
    if(head==NULL)
    {
        head=ptr;
        //tail=NULL;
    }
    else{
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=ptr;
    }
}
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    int t,key;
    cout<<"enter the number ";
    cin>>t;
    node*head=NULL;
    node*tail=NULL;
    while(t--){
        cout<<" enter the key ";
        cin>>key;
        node*ptr=new node();
        ptr->data=key;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            tail=ptr;
        }
        else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    insert1(&head);
    insert(head);
    print(head);
    return 0;
}