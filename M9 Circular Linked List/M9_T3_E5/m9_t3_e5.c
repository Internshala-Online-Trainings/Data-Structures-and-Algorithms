#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// following is the structure specification for circular linked list
struct clist
  {
	int data;
	struct clist *link;
  };
typedef struct clist node;  // using typedef keyword to give alias to structure 

// following is the definition of the function create()
node * create(node *start)
  {
	 node *temp,*ptr;   // ptr will be used to store the address of previous node
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
temp->link = start;		// assigning address of the first node to the link of the last node
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
if (start->data>=120 && start->data<=255) // checking the value of the very first node
printf("\n%10u  %10d  %10u",start,start->data,start->link);
for(temp=start->link;temp != start;temp=temp->link)
if (temp->data>=120 && temp->data<=255)
printf("\n%10u  %10d  %10u",temp,temp->data,temp->link);
getch() ;
return;
	}
 
int main()
   {
	node *start;
	int choice,num,data;
	char ch;
	start = NULL;
 	  system("cls") ;
  		   printf("\n\t\t **** CREATE BLOCK ****\n");
		   start = create(start);
  		   printf("\n\t\t **** DISPLAY BLOCK ****\n");
		   display(start);
}
/**** End of the Program**********/
