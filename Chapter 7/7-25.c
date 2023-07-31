#include<stdio.h>
#include <stdlib.h>

#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

void mazeTraverse(char maze[][12], int direction, int playerRow, int playerColumn);
void printMaze(char maze[][12]);


int main( void )
{
	char maze[12][12] = {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',
						 '1', '0', '0', '0', '1', '0', '0', '0', '0', '0', '0', '1',
						 'X', '0', '1', '0', '1', '0', '1', '1', '1', '1', '0', '1',
						 '1', '1', '1', '0', '1', '0', '0', '0', '0', '1', '0', '1',
						 '1', '0', '0', '0', '0', '1', '1', '1', '0', '1', '0', '0',
						 '1', '1', '1', '1', '0', '1', '0', '1', '0', '1', '0', '1',
						 '1', '0', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1',
						 '1', '1', '0', '1', '0', '1', '0', '1', '0', '1', '0', '1',
						 '1', '0', '0', '0', '0', '0', '0', '0', '0', '1', '0', '1',
						 '1', '1', '1', '1', '1', '1', '0', '1', '1', '1', '0', '1',
						 '1', '0', '0', '0', '0', '0', '0', '1', '0', '0', '0', '1',
						 '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1',};
	int direction = 2;
	int playerRow = 2;
	int playerColumn = 0;

	mazeTraverse(maze, direction, playerRow, playerColumn);

	return 0;
}

void mazeTraverse(char maze[][12], int direction, int playerRow, int playerColumn)
{
	printf("\n\n");	
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
}

