#include <stdio.h>

int main(void)
{
   // loop 10 times
   for (unsigned int x = 1; x <= 10; ++x) {

      // if x is 5, continue with next iteration of loop
      if (x == 5) {   
         x = 6; // skip remaining code in loop body
      }

      printf("%u ", x); // display value of x
   } 
   
   puts("\nUsed continue to skip printing the value 5");
}


