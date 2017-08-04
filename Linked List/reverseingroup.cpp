#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *next;
};
node* reverse_in_group(struct node *head,int k);
void print(struct node *head);
int main()
{
   int arr[10];
   printf("\nEnter elements of Linked List: \n");
   struct node *head,*temp;
   head=NULL;
      for(int i=0;i<10;i++)
      {
           scanf("%d",&arr[i]);
      }
      for(int i=0;i<10;i++)
      {
           if(head==NULL)
           {
                temp=(struct node*)malloc(sizeof(struct node));
                temp->data=arr[i];
                temp->next=NULL;
                head=temp;
           }
           else
           {
                temp->next=(struct node*)malloc(sizeof(struct node));
                temp=temp->next;
                temp->data=arr[i];
                temp->next=NULL;
           }
      }
 
      /* printing the original linked linst */
 
      print(head);
      printf("\n");
      int k;    /* K is the size of group in which linked list 
                   have to be reversed */
 
      printf("\nEnter the element k: ");
      scanf("%d",&k);
 
      head=reverse_in_group(head,k);
 
      /* printing the reversed linked list */
 
      print(head);
      printf("\n");
      return 0;
}
node* reverse_in_group(struct node *head,int k)
{
    struct node *current,*prevnode,*lastnode,*nextnode;
    int count=0;
    current=head;
    prevnode=NULL;
    lastnode=head;
    while(count<k && current!=NULL)
    {
         nextnode=current->next;
         current->next=prevnode;
         prevnode=current;
         current=nextnode;
         count++;
    }
    head=prevnode;
    if(current!=NULL)
    {
         lastnode->next=reverse_in_group(current,k);
    }
    return head;
}
void print(struct node *head)
{
   struct node *current;
   current=head;
   printf("\n\n");
   while(current!=NULL)
   {
        printf("%d->",current->data);
        current=current->next;
   }
}