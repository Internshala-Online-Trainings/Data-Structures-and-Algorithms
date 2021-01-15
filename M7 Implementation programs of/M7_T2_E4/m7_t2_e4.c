/* following the specification of the structure 
typedef used to give an alias 'node' to this structure */
typedef struct queue_type
   {
	 int arr[MX] ;     // array representing queue with size MX
	 int front ;       
	 int rear ;
   } node;
 
 /* following is the definition of the function insert(). q pointer formal parameter represents 
 the queue and item is the value to be inserted */
 int insert(node *q, int item)
 {

 if ((q->front==0 && q->rear==MX-1) || q->front==q->rear+1)
 {
 	printf("Queue overflow error.....") ;

    getch();
 	return 0 ;  // returns 0 if overflow error
	  }
	  	if (q->front==-1)       // if queue is empty
		  q->front=q->rear=0 ;
		  else  
		if (q->rear==MX-1)
	  	  q->rear=0 ;
	  	  else
	  	  q->rear=q->rear+1 ; 

	  q->arr[q->rear]=item ;        // inserting new value in queue 
 return 1 ;  // returns 1 if no overflow error
 }
 /* following is the definition of the function delete(). q pointer formal
 parameter represents queue */ 
 void delete(node *q)
 {
 	int val,count=0 ;
 	while(1)

{
	 	if (q->front==-1)
 	{
	 printf("Queue underflow error ......") ;
 	getch() ;
	break ;    // if queue is empty terminate the loop
	 }
	 val=q->arr[q->front] ;       // extracting the element from front
	 /* following condition checks whether extracted value is divisible 
	 by 3 but not by 5, if yes then add 1 to count */
	 if (val%3==0 && val%5!=0)
	 ++count ; 
	 
	 if (q->front==q->rear)       // only one element was there in the queue
	 q->front=q->rear=-1 ;         // now queue is empty
	 else
	 if (q->front==MX-1)
	 q->front=0 ;
	 else
	 q->front++ ;
	  }   // end of loop
 	printf("\n Total queue elements divisible by 3 but not by 5 =%d",count);
 }
 
 
int main()
   {
   char ch ;
    int val,item,count;
 	node queue ;     //declaring  structure variable
 	queue.front=-1 ;  // initializing front with 1 indicating queue is empty
 	queue.rear=-1 ;   // // initializing rear also with 1 indicating queue is empty
    int flag=1 ;
            while(1)
			{
			  
			  printf("\n\n\t Enter the Number to Push :=> ");
			  scanf("%d",&item);
			  flag=insert(&queue,item);  /* calling the function insert()
			  by passing address of queue and value item */
			       if (flag==0)    // overflow error reported by the insert() function  
 				            break ; //then terminate the loop
		}
  
			 delete(&queue) ; /* calling the delete function that extracts
			 queue element one by one */
              	}
/******************** End of the Program ****************************/
