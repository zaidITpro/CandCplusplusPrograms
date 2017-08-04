#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
	  int val;
	  struct node *next;
	  node(int x)
	  {
	       val=x;
	       next=NULL;
	  }
};
void print(struct node* head);
node *partition(struct node* A, int B) {
    
    struct node *current=A;
    struct node *last1,*last2,*heads=NULL,*headl=NULL,*temps,*templ,*mainhead=NULL,*mainlast;
    if(A==NULL)
    {
    	return NULL;
    }
    if(A->next==NULL)
    {
    	return A;
    }
    while(A!=NULL)
    {
    	  if(A->val==B)
    	  {
                 if(mainhead==NULL)
                 {
                 	 mainhead=A;
                 	 mainlast=mainhead;
                 }
                 else
                 {
                 	mainlast->next=A;
                 	mainlast=mainlast->next;
                 }
    	  }
    	  else if(A->val<B)
    	  {
    	  	    if(heads==NULL)
    	  	    {
    	  	    	heads=A;
    	  	    	temps=heads;
    	  	    }
    	  	    else
    	  	    {
    	  	    	temps->next=A;
    	  	    	temps=temps->next;
    	  	    }
    	  }
    	  else if(A->val>B)
    	  {
    	  	    if(headl==NULL)
    	  	    {
    	  	    	headl=A;
    	  	    	templ=headl;
    	  	    }
    	  	    else
    	  	    {
    	  	    	templ->next=A;
    	  	    	templ=templ->next;
    	  	    }
    	  }
    	  A=A->next;
    }
    temps->next=NULL;
    templ->next=NULL;
    print(heads);
    print(headl);
    if(mainhead==NULL)
    {
    	last1->next=headl;
    	return heads;
    }
    else
    {
    	temps->next=mainhead;
    	mainlast->next=headl;
    	return heads;
    }

}

void print(struct node *head)
{
	  printf("\n\n");
	  struct node *current;
	  current=head;
	  while(current!=NULL)
	  {
	      printf("%d -> ",current->val);
	      current=current->next;
	  }
}
int main()
{
	   struct node *head;
	   head=new node(25);
	   head->next=new node(34);
	   head->next->next=new node(56);
	   head->next->next->next=new node(12);
	   head->next->next->next->next=NULL;

	   
	   print(head);
	   head=partition(head,34);
	   print(head);
	   return 0;

}