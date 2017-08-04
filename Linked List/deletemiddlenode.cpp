#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
}*root=NULL,*temp;
void insert(int item);
int middle_Element(struct node *head);
void print();
int main()
{
     
    int choice,item;
    do
    {
      printf("\nEnter the element you want to insert in the Linked List: ");
             scanf("%d",&item);
             insert(item);
             printf("\nDo you want to coninue[1/0]: ");
             scanf("%d",&choice);
    }while(choice==1);
    printf("\n\nThe original Linked List is:\n");
    print();
    printf("\nMiddle element of the Linked List is: %d",middle_Element(root));
    return 0;
}
void insert(int item)
{
    if(temp==NULL)
    {
         temp=(struct node*)malloc(sizeof(struct node));
         temp->data=item;
         temp->next=NULL;
         root=temp;
    }
    else
    {
         temp->next=(struct node*)malloc(sizeof(struct node));
         temp=temp->next;
         temp->data=item;
         temp->next=NULL;
    }
}
void print()
{
    struct node *current;
    current=root;
    while(current!=NULL)
    {
         printf("%d->",current->data);
         current=current->next;
    }
 
}
int middle_Element(struct node *head)
{
  struct node *current;
     int count=0;
     current=head;
     if(head==NULL)
     {
          return -1;
     }
     else
     {
         current=head;
         while(current!=NULL)
         {
               count++;
               current=current->next;
         }
         int n=count/2;
         int count2=0;
         current=head;
         while(current!=NULL)
         {
              if(count2==n)
              {
                  return current->data;
              }
              else
              {
                  count2++;
                  current=current->next;
              }
         }
     }
}