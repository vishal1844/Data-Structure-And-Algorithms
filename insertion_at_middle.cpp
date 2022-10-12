#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
//  node* deletes(node*head){
//     node*temp;
//     temp=head;
//     head=head->next;
//     delete(temp);
//     //5
//     return head;

// }
void insert(node *head){
    int key;
    cout<<"enter the insertion key ";
    cin>>key;
    node *ptr=new node();
    ptr->data=key;
    ptr->next=NULL;
    int t;
    cout<<"enter the position to insert ";
    cin>>t;
    int i=1;
    while(i<t-1){
        head=head->next;
        i++;
    }
    node*temp;
    temp=head->next;
    head->next=ptr;
    ptr->next=temp;
}
int main()
{
    int t;
    cout<<"enter the number ";
    cin>>t;
    node*head=NULL;
    node*tail=NULL;
    int key;
    while(t--)
    {
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
    insert(head);
   //head=deletes(head);
    print (head);
    return 0;
}