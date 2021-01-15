# include <stdio.h>

int tsc1, tsc2,tsc3 ;  /* Global declaration of 3 test scores 
so that they can be accessed directly in any function */

//following is the definition of the function first() ;
void first()      // Function data type is void() as no value to be returned
{
float avg ;
avg=(tsc1 + tsc2 + tsc3)/3;
printf("Average score = %.2f\n",avg);
second();   // calling the function second() ;
}
//following is the definition of the function second() ;
void second() // Function data type is void() as no value to be returned
{
if (tsc1<tsc2 && tsc1<tsc3)  // if tsc1 is the smallest	
printf("%d",tsc1) ;
else      // now only tsc2 and tsc3 need to be compared as tsc1 is not smallest
if (tsc2<tsc3)    // if tsc2 is smaller than tsc3
printf("%d",tsc2);
else                // tsc3 is the smallest as both the above conditions are false     
printf("%d",tsc3);
}

// definition of the function main() 
int main()
{
	printf("Enter the scores in 3 tests");
	scanf("%d%d%d",&tsc1,&tsc2,&tsc3);
	first() ;  // calling the function first() without passing any value 
	
}
