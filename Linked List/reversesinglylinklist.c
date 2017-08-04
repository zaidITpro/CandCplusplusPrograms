#include <stdio.h>
#include <stdlib.h>
struct node{
     int data;
     struct node *next;     /*next pointer contains the memory address of the next node */
}*root=NULL,*temp;
void insert(int item);
void reverse();
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
       reverse();
       printf("\n\nThe reversed Linked List is:\n");
       print();
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
void reverse()
{
       struct node *current;
       struct node *nextnode,*prev;
       prev=NULL;
       current=root;
       while(current!=NULL)
       {
            nextnode=current->next;
            current->next=prev;
            prev=current;
            current=nextnode;
       }
       root=prev;
}