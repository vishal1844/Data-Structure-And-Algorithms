#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
// /*void deletes(node**head){
//     node*t=*head;
//     while((t)->next->next!=NULL){
//         //node*temp=(*head)->next;
//         t=(t)->next;
//     }
//     node*temp=(t)->next;
//     t->next=NULL;
//     delete temp;
// }*/
void print(node*head){
  while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void deletes(node*head){
    node*t=head;
    while(t->next->next!=NULL){
        t=t->next;
    }
    node*temp=t->next;
    //cout<<&t<<" "<<t<<endl;
    t->next=NULL;
    delete(temp);
    //cout<<&temp<<" "<<temp->data;
}
int main()
{
    int t;
    cout<<"enter the number ";
    cin>>t;
    int key;
    node*head=NULL;
    node*tail=NULL;
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
    deletes(head);
    print(head);
   // cout<<&temp;
    return 0;
}
