#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
 
struct node{
 int data;
    struct node *next;
};
 
node* create_newnode(int data);
bool detectLoop(struct node *head);
 
int main()
{
 
      /*    Now we are creating the linked list shown below
            with a loop i.e  node 16 is connected back to node 10
 
            8--> 10--> 12--> 14--> 16
                 ^                 |
                 |                 |
                 -------------------
 
 
       */
 
 
   struct node *head,*temp;
   head=create_newnode(8);
   head->next=create_newnode(10);
   temp=head->next;
   head->next->next=create_newnode(12);
   head->next->next->next=create_newnode(14);
   head->next->next->next->next=create_newnode(16);
   head->next->next->next->next->next=temp;
 
      if(detectLoop(head))
      {
             cout<<"\n\nLinked List has loop !\n\n";
      }
      else
      {
             cout<<"\n\nLinked List does not contain loop in\n\n";
      }
 
 
 
      /*  Creating new linked list:
           8--> 10--> 12--> 14--> 16-->NULL
 
           The linked list shown above does not conatin any loop
      */
 
 
      head=create_newnode(8);
   head->next=create_newnode(10);
   head->next->next=create_newnode(12);
   head->next->next->next=create_newnode(14);
   head->next->next->next->next=create_newnode(16);
 
 
   if(detectLoop(head))
      {
             cout<<"\n\nLinked List has loop inside it!\n\n";
      }
      else
      {
             cout<<"\n\nLinked List does not has any loop insite it !\n\n";
      }
    
}
 
node* create_newnode(int data)
{
    
    struct node *newnode;
    newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
 
}
 
bool detectLoop(struct node *head)
{
     
    struct node *current1,*current2;
    current1=head;
    current2=head;
    while(current1!=NULL && current2!=NULL && current2->next!=NULL)
    {
          current1=current1->next;
          current2=current2->next->next;
          if(current1==current2)
          {
                return true;
          }
    }
    return false;
}