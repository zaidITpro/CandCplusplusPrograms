#include <stdio.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node *next,*prev;
}*temp,*head=NULL;
void delete_node(int position);
void print();
int main()
{
         /*Creating a doubly Linked List for example */
 
        int choice,value,position,i;
        do
        {
              printf("\nEnter the element: \n");
              scanf("%d",&value);
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
                     temp->next->prev=temp;
                     temp=temp->next;
                     temp->data=value;
                     temp->next=NULL;
              }
              printf("\nDo you want to contiue[1/0]: ");
              scanf("%d",&choice);
        }while(choice==1);
 
        printf("\nOriginal Linked List is: \n");
        print();
 
        for(i=0;i<3;i++)
        {
 
              printf("\nEnter the position from where you want to delete the node: ");
              scanf("%d",&position);
 
              delete_node(position);
 
              printf("\nLinked List after the deletion:\n");
              print();
        }
        return 0;
}
void delete_node(int position)
{
    int count=0;
    struct node *current;
    current=head;
    if(position==1)
    {
          head->next->prev=NULL;
          head=head->next;
    }
    else
    {
          while(current!=NULL)
          {
                 count++;
                 if(count==position-1)
                 {
                        if(current->next->next==NULL)
                        {
                              current->next=current->next->next;
                        }
                        else
                        {
                              current->next=current->next->next;
                              current->next->prev=current;
                              current=current->next;
                              break;
                        }
                 }
                 current=current->next;
          }
           
    }
}
void print()
{
    struct node *current;
    current=head;
    printf("\nTraversing in forward direction:\n");
    while(current!=NULL)
    {
           printf("%d ",current->data);
           if(current->next==NULL)
           {
                  break;
           }
           else
           {
                  current=current->next;
           }
 
    }
    printf("\nTraversing in backward direction:\n");
    while(current!=NULL)
    {
           printf("%d ",current->data);
           current=current->prev;
    }
}