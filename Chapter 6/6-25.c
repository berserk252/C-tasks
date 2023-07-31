#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print (int a[][8]);
int validMove (int currentRow, int currentColumn, int board[][8]);
void maximum (int stat[1000]);

int main( void )
{
	int board[8][8] = {0};
	int currentRow, currentColumn;
	int currentMove;
	int moveNumber, moveCounter = 0;
	int flag, valid = 0;
	int horizontal[8] = {2,  1, -1, -2, -2, -1, 1, 2};
	int vertical[8] =  {-1, -2, -2, -1,  1,  2, 2, 1};
	int stat[1000] = {0}, x = 0;
	
	
	srand(time(NULL));
	
	for( int counter = 0; counter <= 1000; counter++)
	{
		for( x = 0; x <= 7 ; x++)
		{
			for(int y = 0; y <= 7 ; y++)
			{
				board[x][y] = 0;
			}
		}
		currentMove = 0;
		moveCounter = 0;
		valid = 0;
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
		
		stat[counter] = currentMove;
		printf("#%d The horse do %d moves\n\n\t", counter, currentMove);
		print(board);
    }
    
    x = 0;
    
    while( x != 1000 )
    {
    	printf("%d ", stat[x]);
    	x++;
    	
    	if(x % 10 == 0)
    	{
    		puts(" ");
		}
	}
	
	maximum (stat);
	
	return 0;
}

void maximum (int stat[1000])
{
	int max = 0;
	
	for(int x = 0; x <= 1000 ; x++ )
	{
		if(max < stat[x + 1])
			max = stat[x + 1];
	}
	
	printf("\n\nMax number is %d\n", max);
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
