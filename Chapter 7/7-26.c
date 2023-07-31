#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

void mazeGenerator(char maze[][12], int *direction, int *playerRow, int *playerColumn);
void mazeTraverse(char maze[][12], int direction, int playerRow, int playerColumn);
void printMaze(char maze[][12]);


int main( void )
{
	char maze[12][12] = {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',};
	int direction = 0;
	int playerRow = 0;
	int playerColumn = 0;
	
	srand(time(NULL));
	
	mazeGenerator(maze, &direction, &playerRow, &playerColumn);

	mazeTraverse(maze, direction, playerRow, playerColumn);
	
	printf("You finish the maze\n");

	return 0;
}

void mazeGenerator(char maze[][12], int *direction, int *playerRow, int *playerColumn)
{
	int move;
	int side = 1 + rand() % 4;
	int column0 = 0 + rand() % 11;
	int hold;
	int row;
	int column;

	switch(side)
	{
		case UP :
			*playerRow = 0;
			*playerColumn = column0;
			*direction = 3;
			break;
		
		case RIGHT :
			*playerColumn = 11;	
			*playerRow = column0;
			*direction = 4;
			break;
			
		case DOWN :	
			*playerRow = 11;
			*playerColumn = column0;
			*direction = 1;
			break;
			
		case LEFT :
			*playerColumn = 0;
			*playerRow = column0;
			*direction = 2;
			break;
	}
	
	row = *playerRow;
	column = *playerColumn;
	hold = *direction;
	
	maze[row][column] = 'X';
	
	for(int counter = 1; counter < 75; counter++)
	{		
		move = 1 + rand() % 3;
		move *= 2;
		
		switch(hold)
		{
			case UP :
				if(row - move > 0)
				{	
					for(int count = 0; count < move; count++)
					{
						row--;
						maze[row][column] = '0';
					}
				}
				break;
				
			case RIGHT :
				if(column + move < 11)
				{	
					for(int count = 0; count < move; count++)
					{
						column++;
						maze[row][column] = '0';
					}
				}
				break;
				
			case DOWN :
				if(row + move < 11)
				{	
					for(int count = 0; count < move; count++)
					{
						row++;
						maze[row][column] = '0';
					}
				}
				break;
				
			case LEFT :
				if(column - move > 0)
				{	
					for(int count = 0; count < move; count++)
					{	
						column--;
						maze[row][column] = '0';
					}
				}
				break;
		}
		
		hold = 1 + rand() % 4;
	}
	
	switch(hold)
	{
		case UP :
			for( ; row >= 0; row--)
			{
				maze[row][column] = '0';
			}
			break;
		
		case RIGHT :
			for( ; column <= 11; column++)
			{
				maze[row][column] = '0';
			}
			break;
			
		case DOWN :
			for( ; row <= 11; row++)
			{
				maze[row][column] = '0';
			}
			break;
			
		case LEFT :
			for( ; column >= 0; column--)
			{
				maze[row][column] = '0';
			}
			break;	
				
	}
}

void mazeTraverse(char maze[][12], int direction, int playerRow, int playerColumn)
{
	switch(direction)
	{
		case UP :
			if(maze[playerRow][playerColumn - 1] == '1' && maze[playerRow - 1][playerColumn] != '1')
			{
				playerRow -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn - 1] != '1')	
			{
				direction = 4;
				playerColumn -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn - 1] == '1' && maze[playerRow - 1][playerColumn] == '1')
			{
				direction += 1;
			}
			break;
			
			case RIGHT :
			if(maze[playerRow - 1][playerColumn] == '1' && maze[playerRow][playerColumn + 1] != '1')
			{
				playerColumn += 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow - 1][playerColumn] != '1')
			{
				direction = 1;
				playerRow -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow - 1][playerColumn] == '1' && maze[playerRow][playerColumn + 1] == '1')
			{
				direction += 1;
			}
			break;	
			
		case DOWN :
			if(maze[playerRow][playerColumn + 1] == '1' && maze[playerRow + 1][playerColumn] != '1')
			{
				playerRow += 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn + 1] != '1')
			{
				direction = 2;
				playerColumn++;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn + 1] == '1' && maze[playerRow + 1][playerColumn] == '1')
			{
				direction++;
			}
			break;
	
			case LEFT :
			if(maze[playerRow + 1][playerColumn] == '1' && maze[playerRow][playerColumn - 1] != '1')
			{
				playerColumn -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow + 1][playerColumn] != '1')
			{
				direction = 3;
				playerRow++;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow + 1][playerColumn] == '1' && maze[playerRow][playerColumn - 1] == '1')
			{
				direction = 1;
			}
			break;			
	}
		printf("Press enter to see next move\n");
		getchar();
		printMaze(maze);
	
	if(playerRow != 0 && playerRow != 11 && playerColumn != 0 && playerColumn != 11)
	{
		mazeTraverse(maze, direction, playerRow, playerColumn);
	}	
}

void printMaze(char maze[][12])
{
	for(int i = 0; i < 12; i++)
	{
		for(int a = 0; a < 12; a++)
		{
			printf("%c ", maze[i][a]);
		}
		puts("");
	}
	printf("\n\n");	
}

