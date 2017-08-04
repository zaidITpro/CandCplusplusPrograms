#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next,*prev;
}*head=NULL,*temp;
void insert(int value);
void print(struct node *t);
void insert_beg(int value);
void insert_end(int value);
void insert_position(int value,int position);
int main()
{
   int value,ch,position;
 
      /* Generating linked list for example */
 
   do
   {
          printf("\nEnter the value you want to insert: ");
          scanf("%d",&value);
          insert(value);
          printf("\nDo you want to continue[1/0]: ");
          scanf("%d",&ch);
   }while(ch==1);
   print(head);
 
      /* Insertion at the beginning */
 
      printf("\nEnter the value you want to insert at the beginning: ");
      scanf("%d",&value);
      insert_beg(value);
      print(head);
 
      /* Insertion at any other position */
 
      printf("\nEnter the value and position: ");
      scanf("%d%d",&value,&position);
      insert_position(value,position);
      print(head);
 
      /* Insertion at the end */
 
      printf("\nEnter the value to be inserted at the end: ");
      scanf("%d",&value);
      insert_end(value);
      print(head);
 
   return 0;
}
void insert(int value)
{
   if(head==NULL)
   {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->next=NULL;
          temp->prev=NULL;
          head=temp;
   }
   else
   {
          temp->next=(struct node*)malloc(sizeof(struct node));
          temp->next->data=value;
          temp->next->prev=temp;
          temp=temp->next;
          temp->next=NULL;
   }
}
void insert_beg(int value)
{
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=value;
   temp->prev=NULL;
   temp->next=head;
   temp->next->prev=temp;
   head=temp;
}
void insert_position(int value,int position)
{
   int count=0;
   struct node *current;
   current=head;
   while(current!=NULL)
   {
        count++;
        if(count==position-1)
        {
           temp=(struct node*)malloc(sizeof(struct node));
           temp->data=value;
           temp->next=current->next;
           current->next=temp;
           temp->prev=current;
           temp->next->prev=temp;
        }
        current=current->next;
   }
}
void insert_end(int value)
{
    struct node *current;
    current=head;
    while(current!=NULL)
    {
           if(current->next==NULL)
           {
                temp=(struct node*)malloc(sizeof(struct node));
                temp->data=value;
                current->next=temp;
                temp->prev=current;
                temp->next=NULL;
                break;
           }
           current=current->next;
    }
}
 
void print(struct node *t)
{
   struct node *current;
   printf("\n\nTraversing through first node:\n");
   current=t;
   while(current!=NULL)
   {
         printf("%d->",current->data);
         if(current->next==NULL)
         {
               break;
         }
         current=current->next;
   }
   printf("\n\nTraversing through last node:\n");
   while(current!=NULL)
   {
         printf("%d->",current->data);
         current=current->prev;
   }
}