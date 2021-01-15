#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct clist
  {
	int data;
	struct clist *link;
  };
typedef struct clist node;

node * create(node *start)
  {
	 node *temp,*ptr;
	 char ch;
	 int num;
	 do
	  {
		printf("\n\t Enter the value of number : ");
		scanf("%d",&num);
		temp = (node*) malloc(sizeof(node));
		temp->data = num ;
		if(start==NULL)
		  {
			start = temp;
			ptr = start;
		  }
		else
		  {
			ptr->link = temp;
			ptr = ptr->link;   // ptr=temp
		  }
temp->link = start;		
printf("\n\t Do you want to add more nodes (y/n) : ");
		fflush(stdin);
		scanf("%c",&ch);
	   } while(ch=='y'||ch=='Y');
	 return(start);
	}

void display(node *start)
	{
	 node *temp;
	 printf("\n\n Base address    Number     Link");
	 printf("\n ===============================");
printf("\n%10u  %10d  %10u",start,start->data,start->link);
for(temp=start->link;temp != start;temp=temp->link)
printf("\n%10u  %10d  %10u",temp,temp->data,temp->link);
getch() ;
return;
	}
	
   
 
node* del_if_zero(node *start)
  {
	 node *temp,*ptr,*end,*loc,*i;
	 char ch;
	 int num;
	 loc = start;
	 // following post-tested loop get holdof the address of the last node
	 do
	 {
		 end = loc;
		 loc = loc->link;
	 }while(loc!=start);
	 
 	   	
//  temp = start;    // preseving address of first node into temp
	   
if( start->link==start && start->data==0) // only one node in list and contains 0
		{
free(start) ;			// garbage collection.... freeing up space
start = NULL;      // circular linked list is empty
			 
		}
		else if(start->data==0) // first node but not only single node
		{
			 ptr = start;
			 start = start->link;
			 end->link = start;    // assigning address of new first node into link of last node
			 free(ptr);  // deallocation  ..... freeing up space
			  		 }
		 
 return(start);  // retunung the updated value of start
 }


 // following is the definitionof main()
int main()
   {
	node *start;
	int choice,num,data;
	char ch;
	start = NULL;
 	  system("cls");
  		   printf("\n\t\t **** CREATE BLOCK ****\n");
		   start = create(start);
		   printf("\n Nodes before deletion");
           display(start);
		   start = del_if_zero(start);
		   printf("\n Nodes after deletion, if took place");
		   display(start);
 	} 
   /******************** End of the Program ****************************/
