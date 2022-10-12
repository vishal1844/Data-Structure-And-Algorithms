
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void insert(node**head)
{
    int key;
    cout<<"enter the insertion key ";
    cin>>key;
    node*ptr=new node();
    ptr->data=key;
    ptr->next=*head;
    *head=ptr;
}
int main()
{
    int t;
    cout<<"enter the number ";
    cin>>t;
    int key;
    node *head=NULL;
    node *tail=NULL;
    while(t--)
    {
        cout<<"enter the key ";
        cin>>key;
        node *ptr=new node();
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
    insert(&head);
    print(head);
    return 0;
}
