#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void middle(node*head,int t){
    int i=1;
    while(i<=t/2)
    {
        head=head->next;
        i++;
    }
    cout<<head->data;
}
int main(){
    int t;
    cout<<"enter the number ";
    cin>>t;
    int key;
    node*head=NULL;
    node *tail=NULL;
    int temp=t;
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
    middle(head ,temp);
    return 0;
}