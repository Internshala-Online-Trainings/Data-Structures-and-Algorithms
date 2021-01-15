#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
/* following is the specification of the structure with alias node */
typedef struct dlink
	{
	 int no;
	 struct dlink *next;
	 struct dlink  *prev;
	} node;
/* definition of the function create() that creates the nodes of a doubly linked list */
 void create(node **start,node **end)
   {
	node *temp,*p;
	char ch='y';
	system("cls");
	if(*start != NULL)   // if start is not NULL then error as list is not empty
	  {
		printf("\n\n\t **** LIST ALREADY EXISTS *****");
		getch();
		return;
	   }
	fflush(stdin);
	printf("\n\n\t\t **** INPUT BLOCK ****\n");
// following is the loop block to create nodes and insert into doubly linked list 	
while(ch == 'y')
	  {
	   temp=(node *)malloc(sizeof(node));  // creating node dynamically
	   printf("\n\t Enter the no : ==> " );
	   scanf("%d",&temp->no);    // reading value into the node
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
// definition of the function print() that displays all the nodes
void print(node *start,node *end)
   {
	 node *temp;
	 //system("cls") ;
	  
	  
	 printf("\n\n\t End address    Number    Prev Link");
	 printf("\n\t ==================================");
	 for(temp=start;temp!=NULL;temp=temp->next)
		printf("\n       %10u  %10d  %10u",temp,temp->no,temp->next);
	 printf("\n\n\t Press any key to goto MAIN BLOCK.....");
	 getch();
	 return;
   }


  node *dele(node *end)
	{
	 int item;
	 item=end->no;
	 end=end->prev;
	 end->next=NULL;
	 printf("\n\n\t Element [%d] is deleted from Linklist",item);
	 getch();
	 return end;
	}

 
 node* delf(node *start)
{
int item;
node *tp ;
tp=start ;      // preserving address of first node into tp
	 item=start->no;
	 start=start->next;
	 start->prev=NULL;
	 printf("\n\n\t first Element [ %d ] is successfully deleted from Linklist",item);
	 free(tp) ;
     getch();
	 return start;
	}
	
	 

/* Following is the definition of the function delp()  that checks whether any of the node values in the doubly linked list is a palindrome or not. If yes, then delete it. Also if node happens to be the first one, then call delf() function. If node happens to be the last one then call dele() */ 	
	void delp(node **start,node **end)
	{
	 node *temp,*temp1;
int num,rev,r ;	  
// following outer  loop traverses nodes one by one 
	 for(temp=*start;temp!=NULL;temp=temp->next)
{
   temp1=temp->prev;
   rev=0 ;
   num=temp->no ;
/* Following inner loop checks the current  node whether it is palindrome or not. If it is , then takes the appropriate steps to delete it from the list */
   while(num!=0)
   {
   	r=num%10;
   	rev=rev*10+r ;
   	num=num/10 ;
   }    // end of loop
  if (temp->no==rev)   // node value is palindrome
  {
 printf("\n Condition is true %d\t%d",rev,temp->no); getch() ; 
  break ; // terminate the loop if condition is true
}
}  // end of loop
	    if(temp==NULL)
		{
		  printf("\n\n\t No palindrome node value found in the Linklist ");
		  getch();
		  return;
		}
	   
	 if(temp->prev == NULL)   // only if it is the first node
		*start=delf(*start);   // invoking the delf() function that deletes the first node
	 else if(temp->next == NULL)   // only if it is the last node
		*end=dele(*end);  /* invoking the dele() function that delete the last  node and updates the value of end */
	 
	 else
	  {
	   temp1->next=temp->next;
	   temp->next->prev=temp1;
	   
	  }
	 return;
    }

 int main()
   {
	node *start,*end;
	start=end=NULL;   // Assigning NULL to start and end to indicate doubly linked list is empty
	 		  create(&start,&end);  // calling the create() function 
	 		  system("cls");
			   print(start,end);   // calling the function print() to display() nodes before deletion
	 		    
				delp(&start,&end);
	            printf("\n **** After deleting the palindrome node value *****");
				print(start,end) ; //printing after deletion of palindrome node value,if there was any				
	getch() ;
	return 0 ;
	}


 /******************** End of the Program ****************************/