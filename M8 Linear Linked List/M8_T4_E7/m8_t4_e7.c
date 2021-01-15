#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
/* following is the specification of the strcuture */
typedef struct queue_type
   {
	int info;
	struct queue_type *next;   // next would contain address of next node in the queue
   } node;
/* definition of the function create() that creates the queue */
 void create(node **front ,node **rear)
  {
    node *temp,*ptr;
    char ch;
	while(1)
	 {
	 temp=(node *)malloc(sizeof(node)) ;
	 temp->next=NULL;
	 if(temp == NULL)
	  {
	    printf("\n\t     ******* Overflow *******");
	    return;
	  }
	 printf("\n\t Enter the number :=> ");
	 scanf("%d",&temp->info);
	 if(*front == NULL)
		*front=*rear=ptr=temp;
	 else
	   {
		ptr->next=temp;
		ptr=temp;
		*rear=temp;
	   }
	fflush(stdin);
	printf("\n\t Want to add more(y/n) ? : ");
	if(getchar()!='y')
	  break;
    }
	return;
  }
/* definition of the function insert() that inserts new nodes into the queue */
  node *insert(int item,node *rear)
    {
	 node *temp;
	 temp=(node *)malloc(sizeof(node));
	 temp->next=NULL;
	 temp->info=item;
	 rear->next=temp;
	 rear=temp;
	 return(rear);
    }
/* definition of the function delete1() that removes the nodes from the queue 
in FIFO manne */
  node* delete1(node **front)
    {
	 node *temp;
	 temp=*front;
	 *front=(*front)->next;
	 return(temp);
    }

/* definition of the function to display all 
nodes of the queue with one single go*/

  void display(node *front,node *rear)
	{
	 node *temp;
	 printf("\n\n\t Base address    Number     Link");
	 printf("\n\t ===============================");
	 printf("\n    Front= %5u  %10d  %10u",front,front->info,front->next);
	 for(temp=front->next;temp != rear;temp=temp->next)
		printf("\n      %10u  %10d  %10u",temp,temp->info,temp->next);
	 printf("\n    Rear = %5u  %10d  %10u",rear,rear->info,rear->next);
	 printf("\n\n\t Press any key to goto MAIN BLOCK.....");
	 getch();
	 return;
	}


int main()
   {
	char ch; 
    int item;
//	void create(node **,node **),display(node *,node *);
	node *front,*rear,*temp ;
//*insert(int a,node *t),*delete1(node **k);

	front = rear = NULL;
	while(1)
	  {
		//clrscr();
		printf("\n\t     *** Main Block ***\n");
		printf("\n\tLink list representation of Queue");
		printf("\n\t=================================");
		printf("\n\n\t  1) Creation of Queue");
		printf("\n\n\t  2) Inserting element into Queue");
		printf("\n\n\t  3) Deleting element from Queue");
		printf("\n\n\t  4) Display the elements of Queue");
		printf("\n\n\t  5) Exit from program");
		printf("\n\n\t    Enter your Choice :==> ");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)
		  {
		  case '1':
			//clrscr();
			printf("\n\t     *** Create Block ***\n");
			create(&front,&rear);
			break;
		  case '2':
			ch='y';
			//clrscr();
			printf("\n\t     *** Insert Block ***\n");
			while(ch == 'y')
			 {
			  printf("\n\n\t Enter the Number to Push :=> ");
			  scanf("%d",&item);
			  rear = insert(item,rear);
			  printf("\n\t Want to Push more (y/n) => ");
			  fflush(stdin);
			  ch=getchar();
			  if(ch != 'y')
				break;
			 }
		    break;
		 case '3':
			ch='y';
			//clrscr();
			printf("\n\t     *** Delete Block ***\n");
			while(ch == 'y')
			  {
			   temp=delete1(&front);
			   if(temp != NULL)
			    {
				 printf("\n\tThe Poped no.is [ %d ]",temp->info);
				 printf(" & Address is = %u",temp);
				 free(temp) ; // Garbage Collection
				 printf("\n\n\tWant to pop more (y/n) => ");
				 fflush(stdin);
				 ch=getchar();
			    }
			   else
				break;
			 }
		    break;
		  case '4':
			system("cls") ;
			printf("\n\t     *** Display Block ***\n");
			display(front,rear);
			break;
		  case '5':
			exit(0);
		  }
	   }
	}


/******************** End of the Program ****************************/
