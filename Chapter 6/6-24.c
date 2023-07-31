#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print (int a[][8]);
int validMove (int currentRow, int currentColumn, int board[][8]);

int main( void )
{
	int board[8][8] = {0};
	int currentRow, currentColumn;
	int currentMove;
	int moveNumber, moveCounter = 0;
	int flag, valid = 0;
	int horizontal[8] = {2,  1, -1, -2, -2, -1, 1, 2};
	int vertical[8] =  {-1, -2, -2, -1,  1,  2, 2, 1};
	
	srand(time(NULL));
	
	currentRow = 0 + rand() % 7;
	currentColumn = 0 + rand() % 7;	

	while(moveCounter != 8)
	{
		
		flag = 0;
		moveNumber = 0 + rand() % 7;

		while( flag != 1 )
		{
			
			valid = validMove(currentRow + horizontal[moveNumber], currentColumn + vertical[moveNumber], board);
			
			if( valid == 1 )
			{
				currentMove++;
				board[currentRow += horizontal[moveNumber]][currentColumn += vertical[moveNumber]] = currentMove;				
				moveCounter = 0;	
			}
			else
			{
				moveNumber = ++moveNumber % 8;
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
