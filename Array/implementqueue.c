#include <stdio.h>
#define MAX 100
int queue[100];
int front=-1,rear=-1;
void enqueue(int item);
int dequeue();
void print();
void readjusting_queue();
int main()
{
      int ch,item,choice,result;
   do
   {
             printf("\n---Main Menu---");
             printf("\n1. Insert element in queue");
             printf("\n2. Deleting element from queue");
             printf("\n3. Print the Queue");
             printf("\nEnter your choice: ");
             scanf("%d",&choice);
             switch(choice)
             {
                   case 1: printf("\nEnter the element: ");
                           scanf("%d",&item);
                           enqueue(item);
                           break;
                   case 2: result=dequeue();
                           if(result==-1)
                           {
                                printf("\nQueue is in underflow ");
                           }
                           else
                           {
                                printf("\nThe deleted element is: %d",result);
                           }
                           break;
                   case 3: print();
                           break;
                   default: printf("\nYou have entered wrong choice, try again");
             }
             printf("\nDo you want to continue[1/0]: ");
             scanf("%d",&ch);
   }while(ch==1);
}
void enqueue(int item)
{
   if(rear==MAX-1)
   {
             printf("\nCant't insert element, overflow condition");
   }
   else
   {
          front=0;
          rear=rear+1;
          queue[rear]=item;
   }
}
int dequeue()
{
      int result;
   if(front==-1)
   {
         return -1;
   }
   else
   {
            result=queue[front];
            front=front+1;
            readjusting_queue();
            return result;
 
   }
}
void print()
{
   int i;
   printf("\n");
   for(i=0;i<=rear;i++)
   {
        printf("%d ",queue[i]);
   } 
}
void readjusting_queue()
{
   int i;
   for(i=front;i<=rear-1;i++)
   {
        queue[i]=queue[i+1];
   }
   rear=rear-1;
   if(rear==-1)
   {
        front=-1;
   }
}