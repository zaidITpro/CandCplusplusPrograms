#include <stdio.h>
#include <stdlib.h>
void insert(int element);
void print();
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp,*last=NULL;
int main()
{
     int value,ch;
     do
     {
       printf("\nEnter the element you want to insert: ");
       scanf("%d",&value);
       insert(value);
       printf("\nDo you want to continue[1/0]: ");
       scanf("%d",&ch);
     }while(ch==1);
     print();
     printf("\n");
     return 0;
}
void insert(int value)
{
   if(head==NULL)
   {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        head=temp;
        head->next=head;
        last=head;
   }
   else
   {
        temp->next=(struct node*)malloc(sizeof(struct node));
        temp=temp->next;
        temp->data=value;
        temp->next=head;
        last->next=temp;
        last=temp;
   }
}
void print()
{
   struct node *current;
   current=last->next;
   printf("\n");
   do
   {
        printf("%d->",current->data);
        current=current->next;
   }while(current!=last->next);
 
}