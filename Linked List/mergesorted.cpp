#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
};
class linklist
{
 private:
     node *headA=NULL;
     node *headB=NULL;
     node *temp;
 public:
     void create(int ch);
     void print(int ch);
     int check();
     node* sorted_merge(struct node *headA,struct node *headB);
      
};
void linklist::create(int ch)
{
 switch(ch)
 {
  case 1: temp=(struct node*)malloc(sizeof(struct node));
          temp->data=10;
          temp->next=NULL;
          headA=temp;
          temp->next=(struct node*)malloc(sizeof(struct node));
          temp=temp->next;
          temp->data=20;
          temp->next=(struct node*)malloc(sizeof(struct node));
          temp=temp->next;
          temp->data=30;
          temp->next=NULL;
          break;
  case 2: temp=(struct node*)malloc(sizeof(struct node));
          temp->data=15;
          headB=temp;
          temp->next=(struct node*)malloc(sizeof(struct node));
          temp=temp->next;
          temp->data=17;
          temp->next=NULL;
          break;
  default: printf("\nError, something went wrong");
 }
}
void linklist::print(int ch)
{
 switch(ch)
 {
  case 1: temp=headA;
          printf("\n");
          while(temp!=NULL)
          {
           printf("%d->",temp->data);
           temp=temp->next;
          }
          break;
 
     case 2: temp=headB;
             printf("\n");
             while(temp!=NULL)
             {
              printf("%d->",temp->data);
              temp=temp->next;
             }
             break;
 
     case 3: temp=headA;
             printf("\n");
             while(temp!=NULL)
             {
              printf("%d->",temp->data);
              temp=temp->next;
             }
             break;
     default: printf("\n Error, something went wrong");
 }
 
}
int linklist::check()
{
 if(headA->data<headB->data)
 {
  headA=sorted_merge(headA,headB);
 }
 else
 {
  headA=sorted_merge(headB,headA);
 }
}
node* linklist::sorted_merge(struct node *headA,struct node *headB)
{
 if(headA==NULL && headB==NULL)
 {
  return NULL;
 }
 if(headA!=NULL && headB==NULL)
 {
  return headA;
 }
 if(headA==NULL && headB!=NULL)
 {
  return headB;
 }
 if(headA->data<headB->data)
 {
  headA->next=sorted_merge(headA->next,headB);
 }
 else
 {
  temp=headB;
     headB=headB->next;
  temp->next=headA;
  headA=temp;
  headA->next=sorted_merge(headA->next,headB);
 }
 return headA;
}
int main()
{
 linklist ll;
 ll.create(1);
 ll.create(2);
 ll.print(1);
 ll.print(2);
 ll.check();
 ll.print(3);
  
 return 0;
}