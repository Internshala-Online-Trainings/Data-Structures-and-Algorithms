#include <stdio.h>
#define MX 10     // defining a constant MX for array size
int main()
{
	int marks[MX],i,j,temp,flag=0;  // declaration of array with size MX and other variables
	// reading values in array
	for (i=0;i<MX;++i)
	{
	printf("marks[%d] = ",i);
	scanf("%d",&marks[i]);     // reading values into array
}
for (i=0;i<MX-1;++i)    // outer loop for passes
{
	for (j=0;j<(MX-i)-1;++j) // inner loop for comparisons
	{
		if (marks[j]>marks[j+1]) // interchange if condition is true 
		{
			temp=marks[j];   // assigning  value of first element into temp
			marks[j]=marks[j+1];  // assigning value of second element into first one
			marks[j+1]=temp ;     // assigning value of temp into second element
		    flag=1 ;   // make the value of flag 1 indicating that interchanging took place in the current pass 
		}  // end of if
	} // end of inner loop
	if(flag==0)     /* no interchanging took place in the pass just concluded
	thus indicating that array has turned sorted, no need to go for more passes */
	break ;         // terminates the outer loop
	else
	flag=0;   // reinitialising value of flag with 0
	}  // end of outer loop
// lets print the sorted array

for (i=0;i<MX;++i)
printf("marks[%d] = %d\n",i,marks[i]);
}
