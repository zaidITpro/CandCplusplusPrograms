#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
struct StackNode{
    int data;
    struct StackNode *next;
};
 
class Stack_using_linkedlist{
  
    private:
          StackNode *top=NULL;
    public:
          void push(int x);
          int pop();
};
 
void Stack_using_linkedlist::push(int x)
{
     
    if(top==NULL)
    {
           top=(struct StackNode*)malloc(sizeof(struct StackNode));
           top->data=x;
           top->next=NULL;
    }
    else
    {
           struct StackNode *newnode;
           newnode=(struct StackNode*)malloc(sizeof(struct StackNode));
           newnode->data=x;
           newnode->next=top;
           top=newnode;
    }
}
int Stack_using_linkedlist::pop()
{
    if(top==NULL)
    {
           printf("\nStack is in underflow condition, element can't be popped !");
           return 0;
    }
    else
    {
           int element;
           element=top->data;
           top=top->next;
           return element;
    }
}
int main()
{
 
    int element,ch,choice;
    Stack_using_linkedlist  sll;
    do
    {
           printf("\n--Main Menu--");
           printf("\n1. PUSH Operation");
           printf("\n2. POP Operation");
           printf("\nEnter your choice: ");
           scanf("%d",&choice);
           switch(choice)
           {
                case 1:  printf("\n\nEnter the element: ");
                         scanf("%d",&element);
                         sll.push(element);
                         break;
                case 2:  element=sll.pop();
                         if(element==0)
                         {
                            break;
                         }
                         else
                         {
                              printf("\nThe popped element is: %d",element);
                              break;
                         }
                default: printf("\nYou have entered the wrong choice, try again");
           }
           printf("\n\nDo you want to continue[1/0]: ");
           scanf("%d",&ch);
    }while(ch==1);
    return 0;
}