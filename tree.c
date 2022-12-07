#include <stdio.h>
#include<stdlib.h>
typedef struct tree{
    int data;
    struct node *left,*right;
}treetype;
void insert(treetype **rt,int num)
{
    treetype*newnode;
    newnode=NULL;      // or newnode=*rt.               |left|NULL|right|
          newnode=(treetype*) malloc (sizeof(treetype));     //           | left| value here is not NULL now|right |
          if(newnode!=NULL&&*rt==NULL)  // for the very first node.
          { 
              (newnode)->data=num;
              (newnode)->left=(newnode)->right=NULL;
              *rt=newnode;
              
          }
               else if(num<(*rt)->data)
               insert(&((*rt)->left),num);//when this function is called again then the first if () condition true hogi hi.
               else if(num>(*rt)->data)
               insert(&((*rt)->right),num);
}     
  void inorder(treetype*root,int *count){
      if(root==0)
      return ;
      inorder(root->left,count);
      printf("%d",root->data);
      inorder(root->right,count);
      (*count)++;
  }
  void preorder(treetype*root){
      if(root==0)
      return;
      printf("%d",root->data);
      preorder(root->left);
      preorder(root->right);
  }
  void postorder(treetype*root){
      if(root==0)
      return;
      postorder(root->left);
      postorder(root->right);
      printf("%d",root->data);
  }
  void leafnode(treetype*root,int *cln){  //if you take cln a simple integer and not a pointer then you will not get the updated value in the 
      if(root==NULL)                           //main function.
      return;
      if(root->left==NULL&&root->right==NULL)
      (*cln)++;
      leafnode(root->left,&cln);
      leafnode(root->right,&cln);
  }
  void leftchild(treetype*root,int *cnt){
      if(root==NULL)
      return ;
      if(root->left!=NULL&&root->right==NULL)
      (*cnt)++;
      leftchild(root->left,cnt);
      leftchild(root->right,cnt);
  }
  void totalnodes(treetype*root,int *tcnt){
      if(root==NULL)
      return;
      else
      {
          (*tcnt)++;
          totalnodes(root->left,tcnt);
          totalnodes(root->right,tcnt);
      }
  }
  void greatest(treetype*root){
      if(root==NULL)
      return;
      else if(root->left==NULL&&root->right==NULL||root->right==NULL&&root->left!=NULL){
      printf("%d",root->data);
      return;
      }
      else
      greatest(root->right);
  }
   void smallest(treetype*root){
      if(root==NULL)
      return;
      else if(root->left==NULL&&root->right==NULL||root->right!=NULL&&root->left==NULL){
      printf("%d",root->data);
      return;
      }
      else
      smallest(root->left);
  }
  void nodesatleft(treetype*root,int *ncnt){
      if(root==NULL)
      return ;
      else{
          (*ncnt)++;
          nodesatleft(root->left,ncnt);
          nodesatleft(root->right,ncnt);
      }
  }
  void nodesatright(treetype*root,int *rcnt){
      if(root==NULL)
      return ;
      else{
          (*rcnt)++;
          nodesatright(root->left,rcnt);
          nodesatright(root->right,rcnt);
      }
  }
  int  sumofnodes(treetype*root){
      if(root==NULL)
      return;
      else
      return(root->data+sumofnodes(root->left)+sumofnodes(root->right));
  }
  int  height(treetype*root){
      if(root==NULL)
      return ;
      else
      return ((height(root->left),height(root->right))+1);
  }
void main(){
    int choice;
     treetype*root=NULL;
     int r,count=0,cln=0,cnt=0,tcnt=0,m=0,k=0,t=0,q;
      int num;
      do{
      printf("enter the value of number:");
      scanf("%d",&num);
      insert(&root,num);
      printf("do you want to continue:");
      scanf("%d",&choice);
}while(choice!=0);
printf("The inorder traversal is:");
inorder(root,&count);
printf("\n The preorder traversal is:");
preorder(root);
printf("\n The postorder traversal is:");
postorder(root);
printf("\n The total number of nodes are:%d",count);
leafnode(root,&cln);
printf("\nThe total number of leaf nodes are:%d",cln);
leftchild(root,&cnt);
printf("\n The total number of nodes having only left child are:%d",cnt);
totalnodes(root,&tcnt);
printf("\nthe total number of nodes are:%d",tcnt);
printf("\n the greatest node is:");
greatest(root);
printf("\nthe smallest node is:");
smallest(root);
nodesatleft(root->left,&m );
printf("\nthe total number of nodes at left are:%d",m);
nodesatright(root->right,&k);
printf("\nthe total number of nodes at right are:%d",k);
t=sumofnodes(root);
printf("\n the sum of all the nodes is:%d",t);
r=height(root);
printf("\nthe height of the bst is %d",r);

}
 













