#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *next;
};
 
class linklist{
  
   private:
         int data;
         node *head,*current;
   public:
         void get_data();
         int find_node(int n);
         void print();
};
void linklist::get_data()
{
  
      head=NULL;
      current=(struct node*)malloc(sizeof(struct node));
      current->data=8;
      current->next=NULL;
      if(head==NULL)
      {
             head=current;
      }
      current->next=(struct node*)malloc(sizeof(struct node));
      current=current->next;
      current->data=16;
      current->next=(struct node*)malloc(sizeof(struct node));
      current=current->next;
      current->data=25;
      current->next=(struct node*)malloc(sizeof(struct node));
      current=current->next;
      current->data=45;
      current->next=(struct node*)malloc(sizeof(struct node));
      current=current->next;
      current->data=50;
      current->next=NULL;
 
}
void linklist::print()
{
   current=head;
   while(current!=NULL)
   {
           printf("%d->",current->data);
           current=current->next;
   }
   int n;
   printf("\nEnter the nth node from the end which you want to found: ");
   scanf("%d",&n);
   printf("\n\nThe nth node is: %d",find_node(n));
}
int linklist::find_node(int n)
{
  
       current=head;
       int count=0;
       while(current!=NULL)
       {
            count++;
            current=current->next;
       }
       if(count<n)
       {
              return -1;
       }
       if(count==n)
       {
           return head->data;
       }
       else
       {
              current=head;
              while(current!=NULL)
              {
                    if(count==n+1)
                    {
                           current=current->next;
                           return current->data;
                    }
                    else
                    {
                        count--;
                        current=current->next;
                    }
              }
       }
       
}
int main()
{
   linklist ll;
   ll.get_data();
   ll.print();
   return 0;
}