#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void search(node *head){
    int key;
    cout<<"enter the search key ";
    cin>>key;
    int flag=0,count=1;
    while(head!=NULL){
       // head=head->next;
        if(head->data==key)
        {
        flag=1;
        break;
        }
        head=head->next;
        count+=1;
    }
    if(flag){
        cout<<"search elements are found at position "<<count<<endl;
    }
    else{
        cout<<"search elements are not found ";
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
        if(head==NULL){
            head=ptr;
            tail=ptr;
        }
        else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    search(head);
    return 0;
}