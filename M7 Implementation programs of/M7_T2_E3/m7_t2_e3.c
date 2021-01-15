/*********** Program to copy one Stack to another ************/

#include<stdio.h>
#include <conio.h>
#define MX 5
// following is the structure specification.typedef  keyword is being used to give an alias to the strcuture
typedef struct stack_arr
    {
	 int arr[MX*2];
	 int top;
    } node;
 
/* following is the definition of the function initialise()
this function initialises all the elements to zero
and top is set to -1 */ 
void initialise(node *ptr)
  {
    int i;
    ptr->top = -1;
    for(i=0;i<MX;i++)
	  ptr->arr[i]=0;
    return;
  }
/* following is the definition of the function push() that 
is instrumental in inserting the elements into the stack */
 void push(int item,node *ptr)
  {
    //if(ptr->top == MX-1
	  // return;
    ptr->top++;
    ptr->arr[ptr->top]=item;
    return;
  }

/* following is the definition of the function pop() that 
is instrumental in extracting(deleting) the elements from the stack */

 int pop(node *ptr)
   {
    int item;
    if(ptr->top == -1)
	   return(NULL);
    item=ptr->arr[ptr->top];
    //ptr->arr[ptr->top]=0;
    ptr->top--;
    return(item);
   }
/* following is the definition of the function display() that
shows all the stack elements on the screen */
  void display(node *ptr)
	{
	  int i;
	  for(i=(MX*2)-1;i>=0;i--)
	  printf("\n ==> %d",ptr->arr[i]);
	  return;
	}
/* definition of the function main() */
int main()
   {

    char ch;  int i,item;
    node stack1,stack2,stack3; // declaring three stacks, two input ones and one output one
    initialise(&stack1); // initializing the first input stack
    initialise(&stack2); // initializing the second input stack 
    initialise(&stack3);  // initiating the output stack
    //clrscr();
    printf("\n\n\t Program to copy one Stack to another ");
    printf("\n\t ====================================\n");
    // populating the first input stack
	while(1)
	 {
	   printf("\n\t Enter the element in Ist Stack : ");
	   scanf("%d",&item);
	   push(item,&stack1);
	   if (stack1.top==MX-1)  // overflow (no space left)
	   break ;
	    	    
	 }  // end of loop
// popluating the second input stack
while(1)
	 {
	   printf("\n\t Enter the element in 2nd Stack : ");
	   scanf("%d",&item);
	   push(item,&stack2); // overflow (no space left)
	   if (stack2.top==MX-1)
	   break ;
	    	    
	 }  // end of loop
	/* popping the elements from first input stack stack1 
	and pushing them into the output stack stack3 */
	while(1)
	 {
	  item=pop(&stack1);
      printf("item of stack1 = %d\n",item);
	  if(item == NULL)
		break;
	  push(item,&stack3);
	 }
/* popping the elements from second input stack stack2 
	and pushing them into the output stack stack3 */
    while(1)
	 {
	  item=pop(&stack2);
printf("item of stack2 = %d\n",item);

if(item  == NULL)
		break;
	  push(item,&stack3);
	 	 }
    
	 
    printf("\n*******");
	display(&stack3);   //calling the function to display the elements of output stack
    printf("\n*******");
	getch();
  }
 
/******************** End of the program ************************/
