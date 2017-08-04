#include <bits/stdc++.h>
using namespace std;
 
 
struct node
{
  int data;
  struct node *left,*right;
};
 
node *create_new_node(int data);
bool check_for_mirror(struct node *root1,struct node *root2);
 
int main()
{
      /*creating first binary tree*/
 
      node *root1=create_new_node(5);
      root1->left=create_new_node(3);
      root1->left->left=create_new_node(2);
      root1->left->right=create_new_node(1);
      root1->right=create_new_node(4);
 
 
      /*creating second binary tree*/
 
 
      node *root2=create_new_node(5);
      root2->left=create_new_node(4);
      root2->right=create_new_node(3);
      root2->right->left=create_new_node(1);
      root2->right->right=create_new_node(2);
 
      if(check_for_mirror(root1,root2))
      {
            printf("\n\nTrees are mirrors\n\n");
      }
      else
      {
            printf("\n\nTrees are not mirrors\n\n");
      }
 
      return 0;
}
node *create_new_node(int data)
{ 
        
       node *newnode=new node();
       newnode->data=data;
       newnode->left=newnode->right=NULL;
       return newnode;
}
 
bool check_for_mirror(struct node *root1,struct node *root2)
{
    if(root1==NULL && root2==NULL)
    {
         return true;
    }
    if(root1==NULL || root2==NULL)
    {
         return false;
    }
 
    return (root1->data==root2->data &&
             (check_for_mirror(root1->left,root2->right) &&
              check_for_mirror(root1->right,root2->left)));
}