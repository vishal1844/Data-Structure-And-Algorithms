//                                 implementation of normal linked list
// #include<iostream>
// #include<bits/stdc++.h>
// #include<stdio.h>
// using namespace std;
// typedef struct node{
//     int data;
//     node*next;
// }nodetype;
// void display(nodetype*head){
//     cout<<"the linked list is ";
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// int main(){
//     int key,ch;
//     nodetype*head=NULL;
//     nodetype*tail=NULL;
//     while(1){
//         cout<<"enter the key ";
//         cin>>key;
//         nodetype*p=(nodetype*)malloc(sizeof(nodetype));
//         if(p!=NULL){
//             p->data=key;
//             p->next=NULL;
//         }
//         if(head==NULL&&tail==NULL){
//             head=tail=p;
//         }
//         else{
//             tail->next=p;
//             tail=p;
//         }
//         cout<<"do u wanna conitnue press 1 otherwise press 0 ";
//         cin>>ch;
//         if(ch==0)
//         break;
//     }
//     display(head);
//     return 0; 
// }

//                        implementation of stack using linked with single pointer 

/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef struct node{
    int data;
    node*next;
}nodetype;
nodetype* push(nodetype*top){
    int key;
    cout<<"enter the key ";
    cin>>key;
    nodetype*p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL){
        p->data=key;
        p->next=top;
        top=p;
    }
    return top;
}
nodetype* pop(nodetype*top){
    nodetype*temp=top;
    cout<<"the pop element is "<<top->data<<endl;
    top=top->next;
    free(temp);
    return top;
}void display(nodetype*top){
    cout<<"the linked list is ";
    while(top!=NULL){
        cout<<top->data<<" ";
        top=top->next;
    }
    cout<<endl;
}
int main(){
    int ch,i,k;
    nodetype*top=NULL;
    do{
        cout<<"1.push\n2.pop\n3.peek\n4.display\n5.exit\n";
        cout<<"enter the choice ";
        cin>>ch;
        switch(ch){
            case 1:
            top=push(top);
            break;
            case 2:
            if(top==NULL) cout<<"queue is empty or underflow\n";
            else top=pop(top);
            break;
            case 3:
            if(top==NULL) cout<<"stack is empty or underflow\n";
            else cout<<"the peek element is "<<top->data<<endl;
            break;
            case 4:
            display(top);
            break;
            case 5:
            cout<<"exit\n";
            break;
        }
    }while(ch!=5);
    return 0;
}*/
//                                  implementation of stack using linked list with double pointer 
/*#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef struct node{
    int data;
    node *next;
}nodetype;
void push(nodetype**top){
    int key;
    cout<<"enter the key ";
    cin>>key;
    nodetype*p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL){
        p->data=key;
        p->next=*top;
        *top=p;
    }
}
void display(nodetype*top){
    cout<<"the linked list is ";
    nodetype*temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void pop(nodetype**top){
    nodetype*temp=*top;
    cout<<"the pop element is "<<(*top)->data<<endl;
    *top=(*top)->next;
    free(temp);
}
int main(){
    int ch,i;
    nodetype*top=NULL;
    do{
        cout<<"1.push\n2.pop\n3.peek\n4.display\n5.exit\n";
        cout<<"enter the choice ";
        cin>>ch;
        switch(ch){
            case 1:
            push(&top);
            break;
            case 2:
            if(top==NULL) cout<<"stack is empty or underflow\n";
            else pop(&top);
            break;
            case 3:
            if(top==NULL) cout<<"stack is empty or underflow\n";
            else cout<<"the peek element is "<<top->data<<endl;
            break;
            case 4:
            display(top);
            break;
            case 5:
            cout<<"exit\n";
        }
    }while(ch!=5);
    return 0;
}*/
//                          implementation of queues using linked list with single pointer 
/*#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef struct node{
    int data;
    node*next;
}nodetype;
nodetype* enqueue(nodetype*rear){
    int key;
    cout<<"enter the key ";
    cin>>key;
    nodetype*p=NULL;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL){
        p->data=key;
    }
    if(rear==NULL){
        rear=p;
    }
    else{
        rear->next=p;
        rear=p;
        rear->next=NULL;
    }
    return rear;
}
nodetype* dequeue(nodetype*front){
    nodetype*temp=front;
    cout<<"the remove element is "<<front->data<<endl;
    front=front->next;
    free(temp);
    return front;
}
void display(nodetype*front){
    cout<<"the linked list is ";
    nodetype*temp=front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int ch,i;
    nodetype*rear=NULL;
    nodetype*front=NULL;
    do{
        cout<<"1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n";
        cout<<"enter the choice ";
        cin>>ch;
        switch(ch){
            case 1:
            rear=enqueue(rear);
            if(front==NULL) front=rear;
            break;
            case 2:
            if(front==NULL) cout<<"underflow or queue is empty\n ";
            else front=dequeue(front);
            break;
            case 3:
            if(front==NULL) cout<<"underflow\n";
            else cout<<"the peek element is "<<front->data<<endl;
            break;
            case 4:
            display(front);
            break;
            case 5:
            cout<<"exit\n";
        }
    }while(ch!=5);
    return 0;
}*/

//                          implementation of queues using linked list with double pointer 
// #include<iostream>
// #include<stdio.h>
// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node{
//     int data;
//     node *next;
// }nodetype;
// void enqueue(nodetype**rear,nodetype**front){
//     int key;
//     cout<<"enter the key ";
//     cin>>key;
//     nodetype*p=NULL;
//     p=(nodetype*)malloc(sizeof(nodetype));
//     if(p!=NULL){
//         p->data=key;
//         p->next=NULL;
//     }
//     if(*rear==NULL){
//         *rear=p;
//         *front=p;
//     }
//     else{
//         (*rear)->next=p;
//         *rear=p;
//        // (*rear)->next=NULL;
//     }
// }
// void dequeue(nodetype**rear,nodetype**front){
//     nodetype*temp=*front;
//     cout<<"the dequeue element is "<<(*front)->data<<endl;
//     *front=(*front)->next;
//     free(temp);                                                                        
// }
// void display(nodetype*front){
//     nodetype*temp=front;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     int ch;
//     nodetype*rear=NULL;
//     nodetype*front=NULL;
//     do{
//         cout<<"1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n";
//         cout<<"enter the choice ";
//         cin>>ch;
//         switch(ch){
//             case 1:
//             enqueue(&rear,&front);
//             break;
//             case 2:
//             if(front==NULL) cout<<"queue is empty or underflow\n";
//             else dequeue(&rear,&front);
//             break;
//             case 3:
//             if(front==NULL) cout<<"queue is underflow or empty\n";
//             else cout<<"the peek element is "<<front->data<<endl;
//             break;
//             case 4:
//             display(front);
//             break;
//             case 5:
//             cout<<"exit"<<endl;
//         }
//     }while(ch!=5);
//     return 0;
// }
