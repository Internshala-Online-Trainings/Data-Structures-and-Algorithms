#include <stdio.h>
int main()
{
	float num[10]; // declaration of array
	float smallest, sec_smallest ;
	int c ;
	for (c=0;c<10;++c)   // loop for reading values into the array
	{
		printf("num[%d] = ",c);
		scanf("%f",&num[c]) ;
	    }  
	  smallest=num[0]; // storing the first element into variable smallest
	 
	  /*following is the logic to find out the smallest value in the array.
	  The counter variable for subscript c starts from 1 and not 0 as 
	  first element has already been extracted and stored into variable smallest */
	    for (c=1;c<10;++c)
	  {
	    if (num[c]<smallest)  // if current element smaller tan smallest then store it into smallest
	 	 			   smallest=num[c] ;
	  	  }
	  	  printf("Smallest = %.2f", smallest) ;
	  	  getch()  ;
/* now after finding the smallest element let's find second smallest  

*/	  
	 if (smallest==num[0])  // if first element was smallest
	 sec_smallest=num[1];   // then start from second element
else
	  sec_smallest=num[0];  //storing the first element into sec_smallest
	  for (c=1;c<10;++c)    // loop for finding second smallest
	  {
	  	if (num[c]<sec_smallest && num[c]!=smallest)  // if current element smaller than smallest then store it into smallest 
	  	sec_smallest=num[c] ;
	  	  }
	  	  // printing the smallest and second smallest 
printf("Smallest element = %.2f\nSecond smallest = %.2f",smallest,sec_smallest);	

}
