#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
};
void find(node*head){
    int t,i=0;
    cout<<"enter the index ";
    cin>>t;
    while(i<t){
        head=head->next;
        i++;
    }
    cout<<"nth node at index "<<t<<" is "<<head->data;
    //cout<<head->data;
}
int main(){
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
        ptr->prev=NULL;
        if(head==NULL){
            head=ptr;
            tail=ptr;
        }
        else{
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
        }
    }
    find(head);
    return 0;
}