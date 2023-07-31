#include<stdio.h>

int main( void )
{
	int counter1;
	int counter2;
	int integer1;
	int integer2 = 1;
	
	for ( counter1 = 1 , counter2 = 1 ; counter1 <= 10 ; counter1++)
	{
		for ( ; counter2 <= counter1 ; counter2++)
		{
			printf("*");
		}
		printf("\n");
		counter2 = 1;
	}
	printf("\n\n\n\n");
	
//**************

	for ( counter1 = 10 ; counter1 >= 1 ; counter1-- )
	{
		for( counter2 = 1 ; counter2 <= counter1 ; counter2++ )
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n\n\n");
	
//***************

	for(counter1 = 10 , counter2 = 1; counter1 >= 1  ; counter1-- )
	{
			for( integer2 = 9 ; integer2 >= counter1 ; integer2-- )
		{
			printf(" ");
		}	
		
		
			for ( counter2 = 1 ; counter2 <= counter1 ; counter2++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	printf("\n\n\n\n");

//*******************
	
	for(counter1 = 10 , counter2 = 1; counter1 >= 1  ; counter1-- )
	{
		
		for( integer2 = 1 ; integer2 <= counter1 ; integer2++ )
		{
			printf(" ");
		}	
		
		for ( counter2 = 10 ; counter2 >= counter1 ; counter2--)
		{
			printf("*");
		}
		
		
		printf("\n");
	}
	
	return 0;
}



	
