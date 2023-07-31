// Fig. 4.6: fig04_06.c
// Calculating compound interest
#include <stdio.h>
#include <math.h>  

int main(void)
{
   int principal = 1000; // starting principal
   double rate = .05; // annual interest rate
   unsigned int year;
   int integer;
   // output table column heads
   printf("%4s%21s\n", "Year", "Amount on deposit");

   // calculate amount on deposit for each of ten years
   for ( year = 1; year <= 10; ++year) {
	  principal *= 100;
      // calculate new amount for specified year
      int amount = principal * pow(1.0 + rate, year);
	  
	  integer = amount / 100;
	  amount = amount % 100;
	  
      // output one table row
      printf("%4u%21.2d.%d\n", year, integer,  amount);   
   }
   
   
   return 0;
} 
