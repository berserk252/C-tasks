#include<stdio.h>

int searchSimpleN(int array[], int counter);

int main( void )
{
	int simpleNumArray[100];

	for(int counter = 0; counter <= 100 ; counter++)
	{
		simpleNumArray[counter] = 1;
	}

	for(int counter = 2; counter <= 7; counter++)
	{
		searchSimpleN(simpleNumArray, counter);
	}

	for(int counter = 1 ; counter <= 100 ; counter++)
	{
		printf("%3d(%d) ", counter, simpleNumArray[counter]);
		if(counter % 10 == 0)
		{
			puts("");
		}
	}

	return 0;
}

int searchSimpleN(int array[], int counter)
{
	int number = counter;

	while(number < 100)
	{
		if(array[counter] != 0)
		{			
			number += counter;
			array[number] = 0;
		}
		
		if(array[counter] == 0)
		{
			number += 100;
		}
	}
}
