#include <stdio.h>
#include <queue>
#include <stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};
int  getLevel(struct node *root,int target)
{
   std::queue<node*> q;
   if(root==NULL)
   {
       return -1;
   }
   q.push(root);
   q.push(NULL); //NULL is pushed to identify that the current level is completed
   int level=1;
   while(!q.empty())
   {
       struct node *temp=q.front();
       q.pop();
       if(temp==NULL)
       {
              q.push(NULL); 
              level+=1;   //we completed searching in current level so incrementing level
       }
       else
       {
             if(temp->data==target)
             {
                return level;
             }
             if(temp->left!=NULL)
             {
                q.push(temp->left);
             }
             if(temp->right!=NULL)
             {
                q.push(temp->right);
             }
       }
   }
   return -1;
}
int main()
{
 
 
       /*  Generating a binary tree
 
                                     5
                                   /   \
                                  /     \
                                 8       34
                                / \        
                               /   \
                             10     15
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
 
       int target;
    printf("\n\nEnter the element to find its level: \n");
    scanf("%d",&target);
    int result=getLevel(root,target);
    if(result==-1)
    {
         printf("\n\nThe target element is not present in Binary Tree:\n");
    }
    else
    {
         printf("\n\nThe level of the target element is: %d\n\n",result);
    }
    return 0;
}