#include <stdio.h>
#include <stdlib.h>
 
struct node
{
      int data;
      struct node *next;
};
 
class Queue
{
      private:
              node *front=NULL;
              node *rear;
              node *current;
      public:
              void push(int x);
              void pop();
              void traverse();
};
void Queue::push(int x)
{
      if(front==NULL)
      {
              rear=(struct node*)malloc(sizeof(struct node));
              rear->data=x;
              rear->next=NULL;
              front=rear;
      }
      else
      {
              rear->next=(struct node*)malloc(sizeof(struct node));
              rear=rear->next;
              rear->data=x;
              rear->next=NULL;
      }
}
void Queue::pop()
{
      struct node *current;
      if(front==NULL)
      {
              printf("\nQueue is empty !");
      }
      else
      {
              current=front->next;
              front=current;
      }
}
void Queue::traverse()
{
      current=front;
      printf("\n");
      while(current!=NULL)
      {
              printf("%d ",current->data);
              current=current->next;
      }
}
int main()
{
      Queue que;
      int choice,ch,item;
      do
      {
             printf("\n--Main Menu--");
             printf("\n1. Insert a node");
             printf("\n2. Delete a node");
             printf("\n3. Traverse the Queue");
             printf("\nEnter your choice: ");
             scanf("%d",&choice);
             switch(choice)
             {
                   case 1: printf("\nEnter the element you want to insert: ");
                           scanf("%d",&item);
                           que.push(item);
                           break;
                   case 2: que.pop();
                           break;
                   case 3: que.traverse();
                           break;
                   default: printf("\nYou have entered the wrong choice, try again!");
             }
             printf("\nDo you want to continue[1/0]: ");
             scanf("%d",&ch);
      }while(ch==1);
      return 0;
}