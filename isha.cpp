#include<bits/stdc++.h>
using namespace std; 
 struct node{
    int data;
     node *next;
};
void print(node *head){ 
    //node *temp=(*head);
    while((head)!=NULL){
        cout<<(head)->data<<" ";
        (head)=(head)->next;
    }
} 
node* insert(node **head){
    int key;
    cout<<"Enter the inserted key "<<endl;
    cin>>key; 
    node *ptr=new node();
    ptr->data=key;
    ptr->next=NULL;
    if((*head)==NULL){
        (*head)=ptr; 
        return (*head);
    }else{
        node *temp=(*head);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
    }
    return  (*head);
}
int main(){
    int t;
    cin>>t; 
    node *head=NULL;
    node *tail=NULL;

    while(t--){
     int key;
     cout<<"Enter key "<<endl;
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
    insert(&head);
    print(head); 
    cout<<"After calling print function ";
    cout<<head->data<<" ";
    return 0;
}