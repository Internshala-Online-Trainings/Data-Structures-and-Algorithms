#include <stdio.h>

/* following is the definition of the function transpose()
that receives input array passed from the calling function */
void transpose(int x[][3])
{
	int y[3][3],i,j;  // declaration of output array y and other variables
	for (i=0;i<3;++i)   // outer loop for rows of x
	{
		for (j=0;j<3;++j)  // inner loop for columns of x
{

		y[i][j]=x[j][i];    // assigning transpose values into y
} // end of inner loop
	} // end of outer loop
	// printing the output matrix 
	for (i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",y[i][j]);
		}
	printf("\n");  //newline feed as next row will be printed 
	}
	
}
// definition of the function main()
int main()
{
/* following is the declaration and initialization of input matrix arr */
	int arr[][3]={
	{1,2,3},
	{3,4,5},
	{5,6,7}
		} ;
transpose(arr);  // calling the function by passing 2-d array arr	
	
}  //end of main()
