#include <stdio.h>

// following is the structure specification(GLOBAL SCOPE) with declaration of 4 members
	struct IELTS
	{
		char reg_no[15];
		float bnd1,bnd2,bnd3 ;
	} ;
int main()
{
	struct IELTS ivar ; // declaration of structure variable
	
	/* following is the prototype of the function score_avg()
	float is the return type of the function as we will be returning average
	score band and "struct IELTS" is the data type of the passing argument */
	float score_avg(struct IELTS);
	float band_avg ; // declaration of variable that will collect average 
	// reading the registration number & bands scored in 3 IELTS tests
	printf("Enter the registration number & IELTS bands scored in 3 tests");
	gets(ivar.reg_no);    
	scanf("%f%f%f",&ivar.bnd1,&ivar.bnd2,&ivar.bnd3); 
	band_avg=score_avg(ivar) ;  // calling the function by passing structure ivar 
    printf("Average of bans scored = %.2f",band_avg);
    	}	//end of definition of the function main()
    	
    	// following is the definition of the function score_avg()
    	float score_avg(struct IELTS dvar)   // dvar is the formal parameter
		{
			float avg = (dvar.bnd1 + dvar.bnd2 + dvar.bnd3)/3 ;
			return avg ;
		   }   
