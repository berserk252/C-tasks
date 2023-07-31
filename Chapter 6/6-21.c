#include<stdio.h>

int main( void )
{	
	int fclass[6] = {0};
	int first = 1;
	int eclass[6] = {0};
	int econom = 1;
	int ticket;
	int N = 0;
	
	for(int x = 0; x <= 10 ; x++)
	{
		printf("\nEnter 1 if you want first class\n"
			   "Enter 2 if you want econom class :");
		scanf("%d", &ticket);
		
	
		if ( ticket == 1)
		{
			if(first >= 5 )
			{
				printf("In first class all sits is bought\n"
				       "Can you bought in econom class?(1 - Yes, 0 - NO)");
				scanf("%d", &N);
				if(N > 0)
				{
					if(econom >= 5 )
					{
						printf("Sorry,we havn't free sits in econom\n"
							   "The next arrive in 3 hours\n");
					}
					else
					{
						eclass[econom];
							printf("You sit in econom class\n"
					  			   "Your sit number is %d", econom );
					  	econom++;  
					}
				}
				else
				{
					printf("The next arrive in 3 hours\n");
				}
			}
			else
			{
				fclass[first];
				printf("You sit in first class\n"
				       "Your sit number is %d", first );
			    first++;
			}
		}
		else
		{
				if(econom >= 5 )
			{
				printf("In econom class all sits is bought\n"
				       "Can you bought in first class?(1 - Yes, 0 - NO)");
				scanf("%d", &N);
				if(N > 0)
				{
					if(first >= 5 )
					{
						printf("Sorry,we havn't free sits in first\n"
							   "The next arrive in 3 hours\n");
					}
					else
					{
						fclass[first];
						printf("You sit in first class\n"
				       		   "Your sit number is %d", first );
				       	first++;	   
					}
				}
				else
				{
					printf("The next arrive in 3 hours\n");
				}
			}
			else
			{
				eclass[econom]++;
				printf("You sit in econom class\n"
					   "Your sit number is %d", econom );
				econom++;
			}
			
		}
		
		printf("");
		
		
	}
	
	return 0;
}
