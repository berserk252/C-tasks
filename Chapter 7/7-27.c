
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

int volume = 0;

void mazeFill(char maze[][volume]);
void mazeGenerator(char maze[][volume], int *direction, int *playerRow, int *playerColumn);
void mazeTraverse(char maze[][volume], int direction, int playerRow, int playerColumn);
void printMaze(char maze[][volume]);


int main( void )
{
	printf("Enter array volume: ");
	scanf("%d", &volume);
	
	char maze[volume][volume];
	int direction = 0;
	int playerRow = 0;
	int playerColumn = 0;
	
	srand(time(NULL));
	
	mazeFill(maze);
	mazeGenerator(maze, &direction, &playerRow, &playerColumn);
	mazeTraverse(maze, direction, playerRow, playerColumn);

	return 0;
}

void mazeGenerator(char maze[][volume], int *direction, int *playerRow, int *playerColumn)
{
	int move;
	int side = 1 + rand() % 4;
	int column0 = 1 + rand() % (volume - 2);
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
			*playerColumn = volume - 1 ;	
			*playerRow = column0;
			*direction = 4;
			break;
			
		case DOWN :	
			*playerRow = volume - 1;
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
	
	for(int counter = 1; counter < (volume * volume) / 2; counter++)
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
						maze[row][column] = '.';
					}
				}
				break;
				
			case RIGHT :
				if(column + move < volume - 2)
				{	
					for(int count = 0; count < move; count++)
					{
						column++;
						maze[row][column] = '.';
					}
				}
				break;
				
			case DOWN :
				if(row + move < volume - 2)
				{	
					for(int count = 0; count < move; count++)
					{
						row++;
						maze[row][column] = '.';
					}
				}
				break;
				
			case LEFT :
				if(column - move > 0)
				{	
					for(int count = 0; count < move; count++)
					{	
						column--;
						maze[row][column] = '.';
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
				maze[row][column] = '.';
			}
			break;
		
		case RIGHT :
			for( ; column <= volume - 2; column++)
			{
				maze[row][column] = '.';
			}
			break;
			
		case DOWN :
			for( ; row <= volume - 2; row++)
			{
				maze[row][column] = '.';
			}
			break;
			
		case LEFT :
			for( ; column >= 0; column--)
			{
				maze[row][column] = '.';
			}
			break;	
				
	}
}

void mazeTraverse(char maze[][volume], int direction, int playerRow, int playerColumn)
{
	switch(direction)
	{
		case UP :
			if(maze[playerRow][playerColumn - 1] == '#' && maze[playerRow - 1][playerColumn] != '#')
			{
				playerRow -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn - 1] != '#')	
			{
				direction = 4;
				playerColumn -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn - 1] == '#' && maze[playerRow - 1][playerColumn] == '#')
			{
				direction += 1;
			}
			break;
			
			case RIGHT :
			if(maze[playerRow - 1][playerColumn] == '#' && maze[playerRow][playerColumn + 1] != '#')
			{
				playerColumn += 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow - 1][playerColumn] != '#')
			{
				direction = 1;
				playerRow -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow - 1][playerColumn] == '#' && maze[playerRow][playerColumn + 1] == '#')
			{
				direction += 1;
			}
			break;	
			
		case DOWN :
			if(maze[playerRow][playerColumn + 1] == '#' && maze[playerRow + 1][playerColumn] != '#')
			{
				playerRow += 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn + 1] != '#')
			{
				direction = 2;
				playerColumn++;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow][playerColumn + 1] == '#' && maze[playerRow + 1][playerColumn] == '#')
			{
				direction++;
			}
			break;
	
			case LEFT :
			if(maze[playerRow + 1][playerColumn] == '#' && maze[playerRow][playerColumn - 1] != '#')
			{
				playerColumn -= 1;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow + 1][playerColumn] != '#')
			{
				direction = 3;
				playerRow++;
				maze[playerRow][playerColumn] = 'X';
			}
			
			if(maze[playerRow + 1][playerColumn] == '#' && maze[playerRow][playerColumn - 1] == '#')
			{
				direction = 1;
			}
			break;			
	}
	
		printMaze(maze);
		printf("Press enter to move:\n");
		getchar();
	
	if(playerRow != 0 && playerRow != volume - 1 && playerColumn != 0 && playerColumn != volume - 1)
	{
		mazeTraverse(maze, direction, playerRow, playerColumn);
	}	
}

void mazeFill(char maze[][volume])
{
	for(int i = 0; i < volume - 1; i++)
	{
		for(int y = 0; y < volume - 1; y++)
		{
			maze[i][y] = '#';
		}
		printf("\n");
	}
}

void printMaze(char maze[][volume])
{
	for(int i = 0; i < volume - 1; i++)
	{
		for(int a = 0; a < volume - 1; a++)
		{
			printf("%c ", maze[i][a]);
		}
		puts("");
	}
	printf("\n\n");	
}

