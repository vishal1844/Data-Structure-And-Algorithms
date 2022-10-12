#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
int main()
{
    struct node a,b,c,d,e,*ptr=NULL;
    a.data=23;
    b.data=34;
    c.data=12;
    d.data=53;
    e.data=16;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    e.next=NULL;
    ptr=&a;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}