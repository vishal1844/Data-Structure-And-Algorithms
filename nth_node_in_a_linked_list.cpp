#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
};
void find (node *head){
    int t;
    cout<<"enter the index ";
    cin>>t;
    int count=0;
    while(count<t){
        head=head->next;
        count+=1;
    }
    cout<<"the node at index"<<t<<"is "<<head->data;
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
    find(head);
    return 0;
}