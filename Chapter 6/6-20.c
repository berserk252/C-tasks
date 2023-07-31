// Fig. 5.14: fig05_14.c
// Simulating the game of craps.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

// enumeration constants represent game status
enum Status { CONTINUE, WON, LOST };

int rollDice(void); // function prototype

int main(void)
{ 
   // randomize random number generator using current time
   srand(time(NULL));

   int myPoint; // player must make this point to win
   enum Status gameStatus; // can contain CONTINUE, WON, or LOST
   int sum = rollDice(); // first roll of the dice
   int win[22] = {0};
   int lose[22] = {0};
   int y = 0, w = 0;

  for(int x = 0; x <= 1000; x++)
  {
  	 // determine game status based on sum of dice
   switch(sum) {

      // win on first roll
      case 7: // 7 is a winner
      case 11: // 11 is a winner          
         gameStatus = WON;
		 win[1]++; 
         break;

      // lose on first roll
      case 2: // 2 is a loser
      case 3: // 3 is a loser
      case 12: // 12 is a loser
         gameStatus = LOST;
		 lose[1]++; 
         break;

      // remember point
      default:                  
         gameStatus = CONTINUE; // player should keep rolling
         myPoint = sum; // remember the point
         printf("Point is %d\n", myPoint);
         break; // optional
   } 

   // while game not complete
   while (CONTINUE == gameStatus) { // player should keep rolling
   	    y++;
      sum = rollDice(); // roll dice again
      

      // determine game status
      if (sum == myPoint) { // win by making point
         gameStatus = WON;
		 w++; 
         
      } 
      else {
         if (7 == sum) { // lose by rolling 7
            gameStatus = LOST; 
         } 
		  
	  }
  
   }
   
   if( w >= 1 )
   {
   		win[y]++;
   }
   else
   {
   		lose[y]++;
   }

   // display won or lost message
   if (WON == gameStatus) { // did player win?
      puts("Player wins");
   } 
   else { // player lost
      puts("Player loses");
   }
    
	puts("");
	 
    sum = rollDice();
   
   w = y = 0;
   
  }
  
  	
   printf("Wins\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\t15\t16\t17\t18\t19\t20");
   puts("");
   puts("");
   
   printf("\t");
   
  for(int counter = 1; counter <= 21; counter++)
  {
		printf("%d\t", win[counter]);
  }
  
  puts("");
  puts("");
   
   
     printf("Lose\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\t15\t16\t17\t18\t19\t20");
     
     puts("");
     puts("");
     
      printf("\t");
     
  for(int counter = 1; counter <= 21; counter++)
  {
		printf("%d\t", lose[counter]);
  }
  
  puts(""); 
} 

// roll dice, calculate sum and display results
int rollDice(void)
{
   int die1 = 1 + (rand() % 6); // pick random die1 value
   int die2 = 1 + (rand() % 6); // pick random die2 value

   // display results of this roll
   printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
   return die1 + die2; // return sum of dice
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
