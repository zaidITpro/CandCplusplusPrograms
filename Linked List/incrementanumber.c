#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *next;
}*head=NULL;
void reverse();
void print();
void increment();
int main()
{
      
      struct node *current;
 
   printf("\nExample 1:\n");
 
   current=(struct node*)malloc(sizeof(struct node));
   current->data=9;
   current->next=NULL;
   head=current;
   current->next=(struct node*)malloc(sizeof(struct node));
   current=current->next;
   current->data=9;
   current->next=NULL;
 
   printf("\nNumber represented by Linked List before incrementation: \n");
   print();
   increment();
   printf("\n\nNumber represented by Linked List after incrementation:\n");
   print();
 
   /*Generating Example 2*/
 
      printf("\n\nExample 2:\n");
   current=(struct node*)malloc(sizeof(struct node));
   current->data=1;
   current->next=NULL;
   head=current;
   current->next=(struct node*)malloc(sizeof(struct node));
   current=current->next;
   current->data=4;
   current->next=(struct node*)malloc(sizeof(struct node));
   current=current->next;
   current->data=9;
   current->next=NULL;
 
   printf("\nNumber represented by Linked List before incrementation: \n");
   print();
   increment();
   printf("\n\nNumber represented by Linked List after incrementation:\n");
   print();
 
      /*Generating Example 3*/
 
      printf("\n\nExample 3:\n");
      current=(struct node*)malloc(sizeof(struct node));
   current->data=1;
   current->next=NULL;
   head=current;
   current->next=(struct node*)malloc(sizeof(struct node));
   current=current->next;
   current->data=4;
   current->next=(struct node*)malloc(sizeof(struct node));
   current=current->next;
   current->data=3;
   current->next=NULL;
 
   printf("\nNumber represented by Linked List before incrementation: \n");
   print();
   increment();
   printf("\n\nNumber represented by Linked List after incrementation:\n");
   print();
   return 0;
 
}
void increment()
{
    struct node *current,*temp;
    int carry;
    reverse();
    current=head;
    while(current!=NULL)
    {
           if(current->data<9)
           {
                   current->data=current->data+1;
                   break;
           }
           else if(current->data==9 && current->next!=NULL )
           {
                   current->data=0;
                   current=current->next;
           }
           else if(current->data==9 && current->next==NULL)
           {
                   current->data=0;
                   current->next=(struct node*)malloc(sizeof(struct node));
                   current=current->next;
                   current->data=1;
                   current->next=NULL;
                   current=current->next;
           }            
    }
    reverse();
}
void  reverse()
{
   struct node *current,*prevnode,*nextnode;
   current=head;
   prevnode=NULL;
   while(current!=NULL)
   {
         nextnode=current->next;
         current->next=prevnode;
         prevnode=current;
         current=nextnode;
   }
   head=prevnode;
}
void print()
{
   struct node *current;
   current=head;
   while(current!=NULL)
   {
         printf("%d ",current->data);
         current=current->next;
   }
}