#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void deletes(node*head){
    int t;
    cout<<"enter the key to delete ";
    cin>>t;
    while(head->next->data!=t){
        //if(Head)
        head=head->next;
    }
    node*temp=head->next;
    head->next=head->next->next;
    delete(temp);
}
int main()
{
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
    deletes(head);
    print(head);
return 0;
}