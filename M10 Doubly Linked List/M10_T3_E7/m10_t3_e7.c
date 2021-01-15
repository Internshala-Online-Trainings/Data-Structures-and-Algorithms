#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
// following is the structure specification for doubly linked list
typedef struct dlink
	{
	 int no;
	 struct dlink *next;
	 struct dlink  *prev;
	} node;

// following is the definition of the function create()
 void create(node **start,node **end)
   {
	node *temp,*p;
	char ch='y';
	system("cls");
	if(*start != NULL)
	  {
		printf("\n\n\t **** LIST ALREADY EXISTS *****");
		getch();
		return;
	   }
	fflush(stdin);
	printf("\n\n\t\t **** INPUT BLOCK ****\n");
	while(ch == 'y')     // loop to insert nodes
	  {
	   temp=(node *)malloc(sizeof(node));
	   printf("\n\t Enter the no : ==> " );
	   scanf("%d",&temp->no);
	   temp->next = NULL;
	   if(*start==NULL)
		{
		 p=*start=temp;
		 temp->prev=NULL;
		}
	   else
		{
		 p->next=temp;
		 temp->prev=p;
		 p=temp;
		}
	   *end=temp ;
	   fflush(stdin);
	   printf("\n\t Do you want to continue (y/n) ? : ");
	   ch=getchar();
	 }
    return;
   }
// definition of the function counting_fnc() that counts number of nodes
int counting_fnc(node *end)
   {
     int total=0 ;
	 node *temp;
	 system("cls") ;
 	 for(temp=end;temp!=NULL;temp=temp->prev)   // applying the loop in reverse direction
		 ++total ;    // keep adding 1 to the counter variable
	 return total;  // returning total number of nodes back to the calling function
   }

 int main()
   {
	node *start,*end;
	int tot;
	start=end=NULL;     // assigining NULL to start and end indicating doubly linked list is empty
     		  create(&start,&end);
		  
			  tot=counting_fnc(end);
	          printf("Total number of nodes in doubly linked list = %d",tot);  
			return 0 ;
		}


 /******************** End of the Program ****************************/