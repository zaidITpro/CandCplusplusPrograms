#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 
class deletekthnode{
    private:
          node* head=NULL,*temp;
          int k;
    public:
          void insert();
          void print();
          node* deletek();
 
};
void deletekthnode::insert()
{
     
 
     temp=(struct node*)malloc(sizeof(struct node));
     temp->data=1;
     temp->next=NULL;
     head=temp;
     temp->next=(struct node*)malloc(sizeof(struct node));
     temp=temp->next;
     temp->data=2;
     temp->next=(struct node*)malloc(sizeof(struct node));
     temp=temp->next;
     temp->data=3;
     temp->next=(struct node*)malloc(sizeof(struct node));
     temp=temp->next;
     temp->data=4;
     temp->next=(struct node*)malloc(sizeof(struct node));
     temp=temp->next;
     temp->data=5;
     temp->next=(struct node*)malloc(sizeof(struct node));
     temp=temp->next;
     temp->data=6;
     temp->next=NULL;
 
        /*calling print function for printing linked list */
         
     print(); 
           
        printf("\n\n");
     /* calling delete function for deleting every kth node*/
     k=3;
     deletek();
 
     /* calling print function for printing linked list after delete operation */
        printf("\n\n");
     print();
 
     /*second test case */
 
     k=2;
     deletek();
         
        printf("\n\n");
     print();
 
}
node* deletekthnode::deletek()
{
     struct node *current;
     current=head;
     int count=0;
     while(current!=NULL)
     {
            count++;
            if(count==k-1)
            {
                   if(current->next==NULL)
                   {
                          break;
                   }
                   else
                   {
                          current->next=current->next->next;
                   }
                   current=current->next;
                   count=0;
            }
            else
            {
                   current=current->next;
            }
     }
}
void  deletekthnode::print()
{
    struct node *current;
    current=head;
    while(current!=NULL)
    {
              printf("%d ",current->data);
              current=current->next;
    }
}
int main()
{
   deletekthnode dknode;
      dknode.insert();
      return 0;
}