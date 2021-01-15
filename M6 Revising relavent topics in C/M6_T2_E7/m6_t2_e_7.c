#include <stdio.h>
int main()
{
	float temp1,temp2,temp3 ;  // declaration of variables to store temperatures of 3 days
	void mintemp(float,float,float) ; // function prototype
	printf("Enter the temperatures of 3 consecutive days");
	scanf("%f%f%f",&temp1,&temp2,&temp3); // reading temperatures into variables
	mintemp(temp1,temp2,temp3); // calling the funtion by passing 3 arguments
	}   // end of definition (body) of main()
	
	// following is the definition (body) of function mintemp() function
	void mintemp(float t1,float t2,float t3)
	{
		if (t1<t2)    // if first day's temperature is less tha second day's
		if (t1<t3)    // if first day's temperature is less than third day's too 
		printf("First day had minimum temperature");
		else         
		printf("Third day had minimum temperature");
		else
		if (t2<t3)
		printf("Second day had minimum temperature");
		else
		printf("Third day had minimum temperature");
	}    // end of definition of called function mintemp() 
