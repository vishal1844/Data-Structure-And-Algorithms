#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
void print(node*head)
{ 
    while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
    }
}
int main()
{
    int t,key,n;
    cout<<"enter the number ";
    cin>>t;
    node *head=NULL;
    node*tail=NULL;
    while(t--){
        cout<<"enter the key ";
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
    print(head);
    return 0;
}