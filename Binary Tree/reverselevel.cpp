#include <bits/stdc++.h>
using namespace std;
struct node{
 int data;
 struct node *left;
 struct node *right;
};
void reverseLevel(struct node *root){
      
      std::queue<node*> que;
      std::stack<int> element;
      que.push(root);
      while(1){

              int nodecount=que.size();
              if(nodecount==0) break;   /*break the loop if que is empty*/

              while(nodecount>0)
              {
                    struct node *temp=que.front();
                    que.pop();

                    if(temp->right!=NULL) que.push(temp->right);
                    if(temp->left!=NULL) que.push(temp->left);
                    
                    element.push(temp->data);
                    nodecount--;

              }
              element.push(10000009);   /* to separate the level */


      }
      cout<<"\n\nThe reversal level order traversal of the tree is given below:\n\n";
      while(!element.empty()){

             if(element.top()==10000009){
                  cout<<"\n";
                  element.pop();
             }
             else
             {
                  cout<<element.top()<<" ";
                  element.pop();
             }
      }
      cout<<"\n";

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

    reverseLevel(root);

    return 0;

}