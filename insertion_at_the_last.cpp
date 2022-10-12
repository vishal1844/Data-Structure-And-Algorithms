#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insert(node *head)
{
    int key;
    cout<<"enter the insertion key ";
    cin>>key; 
    node*ptr=new node();
    ptr->data=key;
    ptr->next=NULL; 
    if((head)==NULL){
    (head)=ptr;
    return ;
   } 
   else{ 
       //node *temp=*head;
       while((head)!=NULL){
           (head)=(head)->next;
       }
       (head)->next=ptr;

   } 
   cout<<head->data<<" ";
    
}
void print(node *head)
{
    while(head!=NULL){
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
        node *ptr=new node();
        cout<<"enter the key ";
        cin>>key;
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
    //cout<<head->data<<" ";
    insert(head); 
    print(head);
    return 0;
}