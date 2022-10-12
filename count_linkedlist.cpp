#include<bits/stdc++.h>
using namespace std;
//void print(node * head);
struct node
    {
        int data;
        node *next;
    };
int print(node *head)
{
    int count=0;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
        count++;
    }
    return count;
}
int main(){
    // struct node
    // {
    //     int data;
    //     node *next;
    // };
    int t,key;
    cout<<"enter the number";
    cin>>t;
    //int count=0;
    node* head=NULL;
    node* tail=NULL;
    while(t--)
    {
        // node* head=NULL;
        // node* tail=NULL;
        cin>>key;
        cout<<"enter the key"<<key<<endl;
        node *p=new node();
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
        //count++;
    }
    int count;
    count=print(head);
    cout<<endl<<"count of number is "<<count;
    return 0;
}
// void print(node *head)
// {
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head->next=head;
//     }
// }

