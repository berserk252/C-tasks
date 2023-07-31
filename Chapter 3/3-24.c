#include<stdio.h>

int main( void )
{
	int counter = 1, number, largest;
	
	printf("Enter number\n");
	scanf("%d", &number);
	
	largest = number;
	
	while ( counter != 11 )
	{
		if ( number > largest )
		{
			largest = number;
		}
		counter++;
		
		printf("Enter number\n");
		scanf("%d", &number);
	}
	
	printf("Won is %d", largest);
	
	return 0;
}
