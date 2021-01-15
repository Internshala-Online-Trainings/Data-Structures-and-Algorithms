#include <stdio.h>
#define MX 10     // defining a constant MX
int main()
{
	int arr[MX],val, i,occ=0 ;    // declaration of array and variables
	for (i=0;i<MX;++i)    // loop to read value
	{
		printf("arr[%d] = ",i) ;
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to be searched") ;
	scanf("%d",&val) ;       // reading the value to be searched into val
for (i=0;i<MX;++i)     // loop to find the search value
{
	if (val==arr[i])          // check whether current element matches the search value
	{
		printf("Found at location number %d\n",i+1);        // success message with location
	    occ++;                  // add one to the variable occ
		} // end of if	
	
} // end of loop
if (occ==0)      // occ containing zero suggests failure
printf("No such value exists in the array") ;
else
printf("Number of occurrences = %d",occ);
}
