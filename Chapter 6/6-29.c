#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int a[][8]);
int validMove (int currentRow, int currentColumn, int board[][8]);
int acces(int currentRow, int currentColumn, int board[][8] );

int main( void )
{
	int currentRow, currentColumn, currentMove;
	int moveNumber = 0, moveCounter = 0;
	int flag;
	int horizontal[8] = {2,  1, -1, -2, -2, -1, 1, 2};
	int vertical[8] =  {-1, -2, -2, -1,  1,  2, 2, 1};
	int rowCopy1, columnCopy1, rowCopy2, columnCopy2, counter;
	
	srand(time(NULL));
	
	for(int aa = 0; aa <= 10000; aa++)
	{
		counter = 0;
		moveCounter = 0;
		currentMove = 0;
		int board[8][8] = {0};
		
		currentRow = 0 + rand() % 7;
		currentColumn = 0 + rand() % 7;	
	
		rowCopy1 = currentRow;
		columnCopy1 = currentColumn; 
		
		while(moveCounter != 8)
		{		
			flag = 0;

			while( flag != 1 )
			{
			
				moveNumber = acces(currentRow, currentColumn, board);
			
				if( moveNumber > -1 )
				{
					currentMove++;
					board[currentRow += horizontal[moveNumber]][currentColumn += vertical[moveNumber]] = currentMove;				
					moveCounter = 0;
					flag = 1;	
					counter++;
					rowCopy2 = currentRow;
					columnCopy2 = currentColumn;
				}
				else
				{
					moveCounter++;
				
					if ( moveCounter == 8 )
					{
						flag = 1;
					}				
				}
			}
		}
	
		if(counter == 64)
		{
			for(int count = 0 ; count <= 7 ; count++)
			{
				if(rowCopy2 + horizontal[count] == rowCopy1 && columnCopy2 + vertical[count] == columnCopy1)
				{
					printf("You have a bypass\n");
					printf("The horse do %d moves\n\n\t", currentMove);
					printArray(board);
				}
			}
		}
	}

	return 0;
}

int acces(int currentRow, int currentColumn, int board[][8])
{
	static int accessibility[8][8] = {2, 3, 4, 4, 4, 4, 3, 2,
							  3, 4, 6, 6, 6, 6, 4, 3,
							  4, 6, 8, 8, 8, 8, 6, 4,
							  4, 6, 8, 8, 8, 8, 6, 4,
							  4, 6, 8, 8, 8, 8, 6, 4,
							  4, 6, 8, 8, 8, 8, 6, 4,
							  3, 4, 6, 6, 6, 6, 4, 3,
							  2, 3, 4, 4, 4, 4, 3, 2};						  
	int counter = 1, minimum = 8, num = -1, moveNumber = 0;
	int valid = 0;
	int horizontal[8] = {2,  1, -1, -2, -2, -1, 1, 2};
	int vertical[8] =  {-1, -2, -2, -1,  1,  2, 2, 1};
							  
	while(counter <= 8 )
	{
		valid = validMove(currentRow + horizontal[moveNumber], currentColumn + vertical[moveNumber], board);
		accessibility[currentRow][currentColumn] = 0;
			
		if(valid == 1 )	
		{
			if( accessibility[currentRow + horizontal[moveNumber]][currentColumn + vertical[moveNumber]] <= minimum)
			{
				minimum = accessibility[currentRow][currentColumn];
				num = moveNumber;
				
			}
		}
		
		if(accessibility[currentRow + horizontal[moveNumber]][currentColumn + vertical[moveNumber]] != 0)
			accessibility[currentRow + horizontal[moveNumber]][currentColumn + vertical[moveNumber]]--;
			
		moveNumber++;
		
		counter++;
	}
	
	return num;
}

int validMove (int currentRow, int currentColumn, int board[][8])
{

	if( board[currentRow][currentColumn] == 0 && currentRow <= 7 && currentRow >= 0 && currentColumn <= 7 
	   && currentColumn >= 0 )
		{
			return 1;
	    }
	else
		{
			return 0;
	    }	   		
}

void printArray(int a[][8] )
{
	for( int x = 0; x <= 7 ; x++)
	{
		for(int y = 0; y <= 7 ; y++)
		{
			printf("%2d  ", a[x][y]);
		}
		printf("\n\t");
	}
	
	puts("");
}
