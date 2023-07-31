#include<stdio.h>

int main( void )
{
	int number, counter1, counter2, number2, counter;
	
	printf("Enter 5 digits number\n");
	scanf("%d", &number);
	
	counter1 = number / 10000;
	number2 = number;
	number = number % 10;
	counter2 = number;
	number = number2;

	if (counter1 == counter2 )
	{
		counter++;
	}
	
	counter1 = 0;
	counter2 = 0;
	number = number % 10000;
	counter1 = number / 1000;
	number = number2;
	number = number / 10;
	number = number % 10;
	counter2 = number;
	number = number2;
	
	if (counter1 == counter2 )
	{
		counter++;
	}
	
	if ( counter == 2 )
	{
		printf("Your number is palindrom\n"); 
	}
	else
	{
		printf("Your number isn't palindrom\n");
	}
	
	
	
	
	
	
		
	return 0;
}
