#include <stdio.h>
#include <stdlib.h>
void delete_beg();
void delete_end();
void print();
struct node
{
      int data;
      struct node *next;
}*head=NULL,*temp,*last=NULL;
int main()
{
      int ch,choice,value;
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=12;
      temp->next=NULL;
      head=temp;
      temp->next=(struct node*)malloc(sizeof(struct node));
      temp=temp->next;
      temp->data=56;
      temp->next=(struct node*)malloc(sizeof(struct node));
      temp=temp->next;
      temp->data=33;
      temp->next=(struct node*)malloc(sizeof(struct node));
      temp=temp->next;
      temp->data=44;
      temp->next=(struct node*)malloc(sizeof(struct node));
      temp=temp->next;
      temp->data=526;
      temp->next=(struct node*)malloc(sizeof(struct node));
      temp=temp->next;
      temp->data=6;
      temp->next=head;
      last=temp;
      
      do
      {
            printf("\n---Main Menu---");
            printf("\n1. Deletion at beginning");
            printf("\n2. Deletion at end");
            printf("\n3. print linked list");
            printf("\nEnter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: delete_beg();
                        break;
                case 2: delete_end(value);
                        break;
                case 3: print();
                        break;
                default: printf("\nYou have entered wrong choice, try again");
            }
            printf("\nDo you want to continue[1/0]: ");
            scanf("%d",&ch);
      }while(ch==1);
      printf("\n");
      return 0;
}
void delete_beg()
{
      head=head->next;
        last->next=head;
}
void delete_end()
{
      struct node *current;
        current=last->next;
        do
        {
             if(last==current->next)
             {
                   current->next=last->next;
                   last=current;
             }
             current=current->next;
        }while(current!=last->next);
 
}
void print()
{
      struct node *current;
      current=last->next;
      printf("\nLinked List is: \n");
      do
      {
            printf("%d->",current->data);
            current=current->next;
      }while(current!=last->next);
}