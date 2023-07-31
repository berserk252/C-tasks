#include <stdio.h>

int main(void)
{
   unsigned int x, z = 1; // declared here so it can be used after loop
   
   // loop 10 times
   for (x = 1; x <= 10 && z == 1; ++x) {

      // if x is 5, terminate loop
      if (x == 4) {
         z = 0; // break loop only if x is 5
      } 

      printf("%u ", x); 
   } 
   
   printf("\nBroke out of loop at x == %u\n", x);
}
