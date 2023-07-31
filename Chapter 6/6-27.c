#include<stdio.h>

void bruteForce(int [][8]);
int boardScan(int [][8]);
void printArray(int [][8]);

int main( void )
{
	int board[8][8] = {0};
	bruteForce(board);
}

void bruteForce(int board[][8])
{
	long counter = 0;
	int valid = 0;
	int row1 = 0, row2 = 1, row3 = 2, row4 = 3, row5 = 4, row6 = 5, row7 = 6, row8 = 7, num = 0;
	
	for(int counter1 = 0; counter1 < 8; counter1++)
	{
		board[row1][counter1] = 1;
		board[row1][(counter1 + 7) % 8] = 0;
		
		for(int counter2 = 0; counter2 < 8; counter2++)
		{		
			board[row2][counter2] = 1;
			board[row2][(counter2 + 7) % 8] = 0;
			
			for(int counter3 = 0; counter3 < 8; counter3++)
			{
				board[row3][counter3] = 1;
				board[row3][(counter3 + 7) % 8] = 0;
				
				for(int counter4 = 0; counter4 < 8; counter4++)
				{
					board[row4][counter4] = 1;
					board[row4][(counter4 + 7) % 8] = 0;
					
					for(int counter5 = 0; counter5 < 8; counter5++)
					{
						board[row5][counter5] = 1;
						board[row5][(counter5 + 7) % 8] = 0;
						
						for(int counter6 = 0; counter6 < 8; counter6++)
						{
							board[row6][counter6] = 1;
							board[row6][(counter6 + 7) % 8] = 0;
							
							for(int counter7 = 0; counter7 < 8; counter7++)
							{
								board[row7][counter7] = 1;
								board[row7][(counter7 + 7) % 8] = 0;
								
								for(int counter8 = 0; counter8 < 8; counter8++)
								{									
									board[row8][counter8] = 1;
									board[row8][(counter8 + 7) % 8] = 0;
									
									counter++;
									
									
									if(boardScan(board) == 1)
									{
										num++;
										printf("%d ", num);
										printf("%ld\n\n", counter);
										printArray(board);
										puts("");
									}
								}								
							}							
						}
					}
				}	
			}
		}
	}
}

int boardScan(int board[][8])
{
	int row = 0, column = 0;
	int r = row, c = column, num = 0;
	
	for(row = 0; row < 8 ; row++)
	{
		for(column = 0; column < 8 ; column++)
		{
			if(board[row][column] != 0)	
			{
				board[row][column] = 0;
				
				for(int counter = 0; counter <= 7; counter++)
				{
					if(board[counter][column] != 0)
					{
						board[row][column] = 1;
						return 0;
					}
				}	
				
				r = row;
				c = column;
				
				while(r > 0 && c < 7)
				{
					r--;
					c++;
				}
	
				while(r <= 7 && c >= 0)
				{
					if(board[r++][c--] != 0)
					{
						board[row][column] = 1;
						return 0;
					}
				}	

				r = row;
				c = column;
	 
				while(r > 0 && c > 0)
				{
					r--;
					c--;
				}
	
				while(r <= 7 && c <= 7)
				{	
					if(board[r++][c++] != 0)
					{
						board[row][column] = 1;
						return 0;
					}	
				}
							
				board[row][column] = 1;	
			}
		}
	}
	
	
	
	return 1;
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

