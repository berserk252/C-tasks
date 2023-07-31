#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print (int a[][8]);
int validMove (int currentRow, int currentColumn, int board[][8]);
int acces(int currentRow, int currentColumn, int board[][8] );
void printacces (int b[][8]);

int main( void )
{
	int board[8][8] = {0};
	int currentRow, currentColumn;
	int currentMove;
	int moveNumber = 0, moveCounter = 0;
	int flag, valid = 0;
	int horizontal[8] = {2,  1, -1, -2, -2, -1, 1, 2};
	int vertical[8] =  {-1, -2, -2, -1,  1,  2, 2, 1};
	
	srand(time(NULL));
	
	currentRow = 0 + rand() % 7;
	currentColumn = 0 + rand() % 7;	
	
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

	printf("The horse do %d moves\n\n\t", currentMove);
	print(board);
	
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
	printacces(accessibility);
	
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

void print(int a[][8] )
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

void printacces(int b[][8] )
{
	static int counter = 0;
	
	printf("#%d\n\t", counter);
	
	for( int x = 0; x <= 7 ; x++)
	{
		for(int y = 0; y <= 7 ; y++)
		{
			printf("%2d  ", b[x][y]);
		}
		printf("\n\t");
	}
	
	counter++;
	puts("");
}
