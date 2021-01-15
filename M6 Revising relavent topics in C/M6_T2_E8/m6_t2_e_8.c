#include <stdio.h>
int main()
{
	int num ; char ch ;
	char divby6(int) ;    // function prototype
	printf("Enter the number") ;
	scanf("%d",&num);   // reading the value of num 
	ch=divby6(num);     // calling the function by passing the number num 
	if (ch=='y')   // if  'y' has been returned into ch   
	printf("Divisible by 6");
	else                 // if  'y' has not been returned into ch
	printf("Not divisible by 6");
}

// following is the definition(body) of the called function divby6()
char divby6(int val)
{
	if (val%6==0)   // if divisible by 6, remainder will be 0
	return 'y'  ;    // then return 'y'
	else
	return 'n' ;       // if remainder is not 0, then return 'n' 
	
 }
