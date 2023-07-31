// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void) 
{   
   // initialize a
   int a[SIZE] = {2, 4, 6, 8, 10, 12, 37, 45, 68, 89}; 
   int flag = 1;

   puts("Data items in original order");
   
   // output original array
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   // bubble sort                                         
   // loop to control number of passes                    
   for (; flag != 0; ) {                   
       flag = 0;                                                 
      // loop to control number of comparisons per pass   
      for (size_t i = 0; i < SIZE - 1; ++i) {                     
                                                             
         // compare adjacent elements and swap them if first 
         // element is greater than second element           
         if (a[i] > a[i + 1]) {
		 	flag++;                        
            int hold = a[i];                                   
            a[i] = a[i + 1];                             
            a[i + 1] = hold;                               
         }                                       
      }                                   
   }                                      

   puts("\nData items in ascending order");

   // output sorted array
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   puts("");
}



/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

