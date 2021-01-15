#include <stdio.h>
#define SZ 15    // declaration of a named constant
/* following is the global definition of the function howmanyevens() 
darr[] is the formal parameter(dummy) that receives the array from calling function */ 

int howmanyevens(int darr[])
{
	int n,count=0 ;
	for (n=0;n<SZ;++n)
	{
		if (darr[n]%2==0)
		++count ;
	}
	return count ;
	}
	
int main()
{
	/* following is the declaration and initialization of array */
	int arr[]={10,12,15,13,19,100,200,31,32,71,90,85,22,1000,21};
	int count ;
	count=howmanyevens(arr) ; /* calling the function by passing an array. Number of even 
	elements will be returned and stored in count */
	printf("Number of even elements = %d",count);
}         
