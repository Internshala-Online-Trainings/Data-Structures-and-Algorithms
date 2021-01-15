#include <stdio.h>
#define MX 10     // defining a constant MX
int main()
{
	int arr[MX]={100,98,95,90,80,76,75,70,65,62} ;  // declaration + initialization of array
int val, lft=0,rt=MX-1,md=(lft+rt)/2 ;    /* declaration of array and variables. Here lft will be used for storing the left most subscript and rt for right most subscript. md variable stores middle subscript */
	printf("Enter the value to be searched") ;
	scanf("%d",&val) ;       // reading the value to be searched into val
while(lft<=rt)
{
	if (val<arr[md])          /* if value is smaller than the middle element, then obviously  the chance of finding it lies only on the right subarray.  Hence we will update lft */  
	lft=md+1 ;	// updating  lft so that only right subarray is searched */ 	
else  
if (val>arr[md])    /* if value is higher  than the middle element, then obviously  the chance of finding it lies only on the left subarray.  Hence we will update rt */
rt=md-1 ;     // updating rt so that only left subarray is searched
else
{
printf("Found at location number %d\n",md+1);        // success message with location
break ;	     // takes the control out of the loop block 
		}  	
	md=(lft + rt)/2 ;   //updating md before continuing with the search
} // end of loop
if (lft>rt)      /* once the control is out of the loop, value of lft being bigger than that of rt, indicates no such value exists. */
printf("No such value exists in the array") ;
 }
