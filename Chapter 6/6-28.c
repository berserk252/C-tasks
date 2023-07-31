#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main( void )
{
	int array1[20] = {0}, array2[20] = {0};
	int num = 0, hold = 0;
	int counter = 0;
	
	srand(time(NULL));
	
	for(counter = 0; counter <= 19 ; counter++)
	{
		array1[counter] = 1 + rand() % 20;
	} 
	
	printf("FIRST INTEGERS:\n");
	
	for(counter = 0; counter <= 19; counter++)
	{
		printf("%d ", array1[counter]);
	}
	
	counter = 0;
	
	for(int counter1 = 0; counter1 <= 19;counter1++)
	{
	
		for(counter = 0; counter <= 19; counter++)
		{
			if(array1[counter] > array1[counter + 1])
			{	
					hold = array1[counter];
					array1[counter] = array1[counter + 1];
					array1[counter + 1] = hold;
			}
		}
	}
	
	printf("\nSORTED ARRAY:\n");
	
	for(counter = 0; counter <= 19; counter++)
	{
		printf("%d ", array1[counter]);
	}
	
	counter = 0;
	
	while(num <= 19 )
	{
		if(array1[num] != array2[counter - 1])
		{
			array2[counter] = array1[num];
			counter++;
		}
		num++;
	}
	
	printf("\nSECOND INTEGERS:\n");
	
	for(counter = 0; counter <= 19; counter++)
	{
		printf("%d ", array2[counter]);
	}

	return 0;
}
