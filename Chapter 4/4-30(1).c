// Fig. 4.7: fig04_07.c
// Counting letter grades with switch
#include <stdio.h>

int main(void)
{
   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0;
   unsigned int fCount = 0; 
   int average;
   
  

   puts("Enter the letter grades." );
   puts("Enter the EOF character to end input." );
   int grade; // one grade 

   // loop until user types end-of-file key sequence
   while ((grade = getchar()) != EOF) {
      
      // determine which grade was input
       if ( grade == 'a' )
      {
      		aCount++;
      	
	  }
	  else if ( grade == 'b' )
      {
      		bCount++;
      	
	  }
	  else if ( grade == 'c' )
      {
      		cCount++;
      
	  }
	  else if ( grade == 'd' )
      {
      		dCount++;
      	
	  }
	  else if ( grade == 'f' )
      {
      		fCount++;
	  }
   } // end while

   // output summary of results
   puts("\nTotals for each letter grade are:");
   printf("A: %u\n", aCount);
   printf("B: %u\n", bCount); 
   printf("C: %u\n", cCount); 
   printf("D: %u\n", dCount); 
   printf("F: %u\n", fCount); 
   
   
   
   return 0;
} 
