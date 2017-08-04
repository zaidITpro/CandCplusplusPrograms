#include <stdio.h>
#include <stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};
bool isBalanced(struct node *root);
int findheight(struct node *root)
{
     int lefth=0,righth=0;
     if(root==NULL)
     {
         return 0;
     }
     lefth=findheight(root->left);
     righth=findheight(root->right);
     if(lefth>righth)
     {
           return lefth+1;
     }
     else
     {
           return righth+1;
     }
}
bool isBalanced(struct node *root)
{
    int left_height,right_height;
    if(root==NULL)
    {
         return true;
    }
    left_height=findheight(root->left);
    right_height=findheight(root->right);
    if(abs(left_height-right_height)<=1 && isBalanced(root->left) && isBalanced(root->right))
    {
            return true;
    }
    return false;
}
int main()
{
 
 
       /*  Generating a binary tree
 
                                     5
                                   /   \
                                  /     \
                                 8       34
                                / \        
                               /   \
                             10     15
       */
 
 
    struct node *root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=5;
    root->left=(struct node*)malloc(sizeof(struct node));
    root->left->data=8;
    root->left->left=(struct node*)malloc(sizeof(struct node));
    root->left->left->data=10;
    root->left->left->left=root->left->left->right=NULL;
    root->left->right=(struct node*)malloc(sizeof(struct node));
    root->left->right->data=15;
    root->left->right->left=root->left->right->right=NULL;
 
     
    root->right=(struct node*)malloc(sizeof(struct node));
    root->right->data=34;
    root->right->left=root->right->right=NULL;
 
 
    if(isBalanced(root))
    {
          printf("\n\n\nThe above given tree is a Balanced Tree\n\n\n");
    }
    else
    {
          printf("\n\n\nThe above given tree is not a Balanced Tree\n\n\n");
    }
    return 0;
}