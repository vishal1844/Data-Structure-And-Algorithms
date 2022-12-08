#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
};
void search(node*head){
    int t=1;
    int n;
    cout<<"enter the search element ";
    cin>>n;
    int flag=0;
    while(head!=NULL){
        head=head->next;
        if(head->data==n){
            flag=1;
            break;
        }
        t++;
        //flag=1;
    }
    if(flag==0){
        cout<<"search element is not found ";
    }
    else{
        cout<<"search element is found at position "<<t+1;
    }
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
    search(head);
    return 0;
}
