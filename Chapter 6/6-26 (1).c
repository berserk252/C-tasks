#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void deleteAccessibility(int array[][8], int row, int column);
int minimal(int array[][8], int row);
void printArray(int array[][8]);

int main( void )
{
	int board[8][8] = {0};
	int accessibility[8][8] = {22, 22, 22, 22, 22, 22, 22, 22,
						   	   22, 24, 24, 24, 24, 24, 24, 22,
						       22, 24, 26, 26, 26, 26, 24, 22,
						       22, 24, 26, 28, 28, 26, 24, 22,
						       22, 24, 26, 28, 28, 26, 24, 22,
						       22, 24, 26, 26, 26, 26, 24, 22,
						       22, 24, 24, 24, 24, 24, 24, 22,
						       22, 22, 22, 22, 22, 22, 22, 22};

	int row, column;
	
	srand(time(NULL));
	row = 0 + rand() % 7;
	column = 0 + rand() % 7;
	
	for(int counter = 1; counter < 9; counter++)
	{
		if(column != -1)
		{
			board[row][column] = counter;
			deleteAccessibility( accessibility, row, column);
		}
		row = (row + 1) % 8;
		column = minimal(accessibility, row);
	}
	
	printArray(board);
}

void deleteAccessibility(int array[][8], int row, int column)
{
	int r = row, c = column;
	
	// Horizontal
	
	for(int counter = 0; counter <= 7; counter++)
	{
		array[row][counter] = 0;			
	}
	
	// Vertical
	
	for(int counter = 0; counter <= 7; counter++)
	{
		array[counter][column] = 0;
	}	
	
	while(r > 0 && c < 7)
	{
		r--;
		c++;
	}
	
	while(r <= 7 && c >= 0)
	{
		array[r++][c--] = 0;
	}
	
	//Diagonal (left-up)
	
	r = row;
	c = column;
	 
	while(r > 0 && c > 0)
	{
		r--;
		c--;
	}
	
	while(r <= 7 && c <= 7)
	{
		array[r++][c++] = 0;	
	}
	
}

int minimal(int array[][8], int row)
{
	int counter = 0, minimum = 28, num = -1;
	
	while(counter <= 7 )
	{
		if(array[row][counter] < minimum && array[row][counter] > 0)
		{
			minimum = array[row][counter];
			num = counter;
		}	
		
		counter++;
	}
	
	return num;
}

void printArray(int array[][8] )
{
	for( int x = 0; x <= 7 ; x++)
	{
		for(int y = 0; y <= 7 ; y++)
		{
			printf("%2d  ", array[x][y]);
		}
		printf("\n");
	}
	
	puts("");
}

