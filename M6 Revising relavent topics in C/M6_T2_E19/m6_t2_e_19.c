#include <stdio.h>
int main()
{
	/* 1.following is the function prototype of the function updation()
	As we are calling by reference we have used * with the data types 
	2. function will not return any value. Hence it's data type is void 
	*/
	void updation(int *, float *,int *, float *;); 
	int a,b ;
	float c,d ;
	printf("Enter the values of a,b,c and d\n");
	scanf("%d%d%f%f",&a,&b,&c,&d);    // reading the values into 4 variables
	updation(&a,&c,&b,&d);  // calling the function by passing 4 values by reference
	printf("\n Updated values in the calling function : \n");
	printf("a = %d\nc= %.2f\nb = %d\nd = %.2f",a,c,b,d);  
}  // end of definition of main()

// following is the definition of the function updation()
void updation(int *ap, float *cp, int*bp, float *dp) 
{
	/* raising the values of first and last variables 4 times*/
	*ap= *ap * 4 ;
	*dp= *dp * 4 ;
	/* lowering the values of second and third variables by half */
	*bp= *bp/2 ;
	*cp= *cp/2 ; 
	 }   // end of definition of the function uddation()  
