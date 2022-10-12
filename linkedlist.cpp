#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node*head=NULL;
    node*tail=NULL;
    int key;
    int t;
    cin>>t;
    while(t--){
    cin>>key;
    cout<<"enter the key "<<key<<endl;
    node*p=new node();
    p->data=key;
    p->next=NULL;
    if(head==NULL){
        head=p;
        tail=p;
    }
    else{
        tail->next=p;
        tail=p;
    }
    }
    print (head);
    return 0;
}