#include <stdio.h>
int main()
{
   /*decl of variables for principal amount,rate of interest,
time and simple interest*/
float pamt,roi,sint ;
int tm ;
float getinterest(float,int,float) ; // function prototype 
printf("Enter the principal amount,rate of interest and time") ;
scanf("%f%f%d",&pamt,&roi,&tm) ;   // reading the values
sint=getinterest(pamt,tm,roi);   // calling the function by passing 3 arguments
printf("Simple Interest =  %.2f",sint);  // getting the returned value printed
}

// following is the definition(body) of the function getinterest()
float getinterest(float pamt1,int tm1,float roi1)
{
	float s=(pamt1 * tm1 * roi1)/100 ;  // calculating the simple interest
	return s ;  // returning the simple interest stored in s
	} 
