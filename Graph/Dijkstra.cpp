#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next,*prev;
}*head=NULL,*temp;
void insert(int item);
void print(struct node *t);
int main()
{
   int value,ch;
   do
   {
          printf("\nEnter the item you want to insert: ");
          scanf("%d",&value);
          insert(value);
          printf("\nDo you want to continue[1/0]: ");
          scanf("%d",&ch);
   }while(ch==1);
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