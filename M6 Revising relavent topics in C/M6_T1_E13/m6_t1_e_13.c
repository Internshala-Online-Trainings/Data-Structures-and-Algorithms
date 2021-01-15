# include <stdio.h>
#include <stdlib.h>    // required for exit() function 
int main()
{
	int n,i ;
	long double *GDP ; /* declaration of array through pointer 
	as array name is pointer to base address */
	printf("Enter the number of countries") ;
	scanf("%d",&n);   // reading he number of countries
	/* in the following statement we are using malloc() function to allocate 
	space dynamically for the array GDP */
	GDP=(long double *) malloc(sizeof(long double)* n); 
	if (GDP==NULL) // if dynamic space allocation encounters failure 
	{
		printf("dynamic memory allocation resulted into failure....exiting") ;
	exit(0);    // terminates the program …. Note that in some compilers argument 0 is not given
	}
	// using loop to read GDP's of n number of countries into array
	for (i=0;i<n;++i)
	{
		printf("Enter the GDP of country number %d",i+1);
		scanf("%Lf",&GDP[i]);
	}
	// the following loop prints the GDP's of countries
	for (i=0;i<n;++i)
	printf("\nGDP of country number %d is %.2Lf",i+1,GDP[i]); 
	
}  // end of main()
