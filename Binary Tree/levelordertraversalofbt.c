#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *left,*right;
};
 
void level_order_traversal(struct node *root);
int get_height(struct node *root);
void print_given_level(struct node *root,int level);
 
int main()
{
 
      /*  Genrating the binary tree
       
                     5
                   /   \
                  /     \
                 8       19
                / \      / \
               /   \    /   \
             12    14  21    23
              
      */
 
 
   struct node *root,*temp;
 
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=5;
   root=temp;
   temp->left=(struct node*)malloc(sizeof(struct node));
   temp->left->data=8;
   temp->left->left=(struct node*)malloc(sizeof(struct node));
   temp->left->left->data=12;
   temp->left->left->left=temp->left->left->right=NULL;
   temp->left->right=(struct node*)malloc(sizeof(struct node));
   temp->left->right->data=14;
   temp->left->right->left=temp->left->right->right=NULL;
 
   temp->right=(struct node*)malloc(sizeof(struct node));
   temp->right->data=19;
   temp->right->left=(struct node*)malloc(sizeof(struct node));
   temp->right->left->data=21;
   temp->right->left->left=temp->right->left->right=NULL;
   temp->right->right=(struct node*)malloc(sizeof(struct node));
   temp->right->right->data=23;
   temp->right->right->right=temp->right->right->left=NULL;
 
   printf("\n\n");
   printf("\nThe level order traversal of the tree is: \n\n");
 
   level_order_traversal(root);
      return 0;
}
void level_order_traversal(struct node *root)
{
   int h,i;
   h=height(root);
   for(i=1;i<=h;i++)
   {
        print_given_level(root,i);
   }
}
void print_given_level(struct node *root,int level)
{
   if(root==NULL)
   {
       return;
   }
   if(level==1)
   {
        printf("%d ",root->data);
   }
   else if(level>1)
   {
          print_given_level(root->left,level-1);
          print_given_level(root->right,level-1);
   }
}
int height(struct node *root)
{
   int right_height,left_height;
   if(root==NULL)
   {
       return 0;
   }
   left_height=height(root->left);
   right_height=height(root->right);
   if(left_height>right_height)
   {
        return left_height+1;
   }
   else
   {
        return right_height+1;
   }
}