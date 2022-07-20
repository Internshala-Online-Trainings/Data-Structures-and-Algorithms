// M3_T2_E5
#include <stdio.h>

int main() {
    
    float arr[10]; // declaration of array
    float small1, small2;
    int count;
    
    // loop for reading values into the array
    for(count=0; count<10; count++){
        printf("Enter value of %d element: ", count);
        scanf("%f", &arr[count]);
    }
    
    // storing the first element into variable smallest
    small1=arr[0], small2=arr[0];
    
    /*following is the logic to find out the smallest value in the array.
	  The counter variable for subscript c starts from 1 and not 0 as 
	  first element has already been extracted and stored into variable
	  smallest */
    for(count=0; count<10; count++){
        // if current element smaller tan smallest then store it into smallest
        if(arr[count]<small1)
        {
            small1=arr[count];
        }
    }
    
    /* now after finding the smallest element let's find second smallest */
    for(count=0; count<10; count++)
    {
        // if current element smaller than smallest then store it into smallest
        if(arr[count]<small2 && arr[count]>small1){
            small2=arr[count];
        }
    }
	
    // printing the smallest and second smallest 
    printf("Smallest value is: %.2f \nSecond smallest value is: %.2f", small1, small2);
    
    return 0;
}
