#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

void bucketSort(int array1[]);
int searchMaxDev(int array[]);
int max(int array[]);
int searchRow(int array1[], int count, int counter);
int arraySort1(int array2[][SIZE - 1], int array1[], int row, int count); //zapolnyaet dvumernyj massiv
void arraySort2(int array1[], int array2[][SIZE - 1]); //zapolnyaet odnimerniy massiv
void initArrays(int array[][SIZE - 1]);
void randArray(int array[]);
void printArray(int array[]);


int main( void )
{
	int array[SIZE];
	
	randArray(array);
	bucketSort(array);
	
	return 0;
}

void bucketSort( int array1[])
{
	int counter = 0;
	int num;
	int array2[][SIZE - 1] = {0};
	int row = 0;
	
	num = searchMaxDev( array1);
	
	for(counter = 1; counter <= num ; counter++)
	{
		initArrays(array2);
		
		for(int count = 0; count <= SIZE; count++)
		{
			row = searchRow(array1, count, counter);
			arraySort1(array2, array1, row, counter);
		}
		
		arraySort2(array1, array2);
		printArray(array1);
	}
}

int searchRow(int array1[], int count, int counter)
{
	int number1 = 0, number2 = 0, number3 = 0;
	
	number1 = array1[count];
	
	while(number2 <= counter)
	{
		number3 = number1 % 10;
		number1 /= 10;
		number2++;
	}
	
}

int searchMaxDev(int array[])
{
	int num1, num2 = 10, num3 = 1;
	int counter = 0;
	
	num1 = max(array);
	
	while(counter != 1)
	{
		if( num1 / num2 == 0)
		{
			return num3;
		}
		
		num3++;
		num2 *= 10;
	}
}

int max(int array[])
{
	int max = 0;
	
	for(int counter = 0 ; counter <= SIZE ; counter++)
	{
		if(array[counter] > max )
		{
			max = array[counter];
		}
	}	
	return max;

}

int arraySort1(int array2[][SIZE - 1], int array1[], int row, int count)
{
	for(int counter; counter <= SIZE - 1; counter++)
	{
		if(array2[row][counter] != 0)
		{
			array2[row][counter] = array1[count];
			return 0;
		}
	}
}

void arraySort2(int array1[], int array2[][SIZE - 1])
{
	int counter = 0;
	
	for(int row = 0; row <= 9 ; row++)
	{
		for(int column = 0; column <= SIZE - 1; column++)
		{
			if(array2[row][column] != 0)
			{
				array1[counter] = array2[row][column];
				counter++;
			}
			else
			{
				column = SIZE;
			}	
		}
	}
}

void initArrays(int array[][SIZE - 1])
{
	for(int counter1 = 0; counter1 <= 9; counter1++)
	{
		for(int counter2 = 0; counter2 <= SIZE; counter2++)
		{
			array[counter1][counter2] = 0;
		}
	}
}

void randArray(int array[])
{
	srand(time(NULL));
	
	for(int counter = 0; counter <= SIZE ; counter++)
	{
		array[counter] = 1 + rand() % 10000;
	}
}

void printArray(int array[])
{
	for(int counter = 0; counter <= SIZE ; counter++)
	{
		printf("%d ", array[counter]);
	}
	
	printf("\n");
}
