#include<stdio.h>
#define SIZE 12

int main( void )
{
	int floor[SIZE][SIZE] = {0};
	int turtle;
	int feather = 1;
	int y = 0;
	int a = 0;
	int interval;
	
	
	printf("Enter a comands\n"
		   "<< 1 = up the feather\n2 = down the feather\n"
		   "3 = go right\n4 = go left\n"
		   "5.10 = go to 10 (or more) times\n"
		   "6 = Enter the array of 50x50\n9 = The end of input >>\n\n");
	
	for( int x = 0; turtle != 9 ; )
	{
		scanf("%d", &turtle);
		
		switch(turtle)
		{
			case 1 :
				feather = 1;
				break;
			
			case 2 :
				feather = 2;
				break;
			
			case 3 :
				if( x != SIZE)
				{
					x++;
					y = 0;
				}
				else
				{
					printf("You exit the array size\n");
				}
			
				break;
			
			case 4 :
				if( x != 0 )
				{
					x--;
					y = 0;
				}
				else
				{
					printf("You exit the array size\n");
				}
				break;
			
			case 5 :
				printf("* ");
				scanf("%d",  &interval);
				a = y + interval;
				if( feather == 2)
				{
					for( ; y < a ; y++)
					{
						if(y <= SIZE  )
						{
							if(floor[x][y] != 1)
							{
								floor[x][y]++;
							}	
						}
						else
						{
							printf("You exit array\n");
							a = 0;
						}
					
					}
				}
				else
				{
					y += interval;
				}
				break;
			
			case 6 :
				for(int z = 0; z <= SIZE - 1; z++ )
				{
					for( int a = 0 ; a <= SIZE - 1; a++ )
					{
						if ( floor[z][a] == 1 )
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}
					puts("");
				}
				break;
				
			case 9 :
				break;	
			
			default :
				printf("You enter no comand,please enter again :");
			break;
				
		}
	}
		
	return 0;
}
