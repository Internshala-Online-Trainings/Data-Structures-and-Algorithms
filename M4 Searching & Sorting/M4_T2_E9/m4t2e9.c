#include <stdio.h>
#define MX 10     // defining a constant MX for array size
int main()
{
	int sales[MX],i,j,temp;  // declaration of array with size MX and other variables
	// reading values in array
	for (i=0;i<MX;++i)
	{
	printf("sales[%d] = ",i);
	scanf("%d",&sales[i]);     // reading values into array
}
for (i=0;i<MX-1;++i)    // outer loop for passes
{
	for (j=i+1;j<MX ;++j) // inner loop for comparisons
	{
		if (sales[i]<sales[j])      // interchange if first element is smaller than the second one
		{
			temp=sales[i];   // assigning  value of first element into temp
			sales[i]=sales[j];  // assigning value of second element into first one
			sales[j]=temp ;     // assigning value of temp into second element
		     
		}  // end of if
	} // end of inner loop
}
// printing the  sorted (descending) array
	 for (i=0;i<MX;++i)
printf("sales[%d] = %d\n",i,sales[i]);
}
