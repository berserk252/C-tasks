#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 70

void TMove(int *Trun);
void HMove(int *Hrun);
void print(int Trun, int Hrun);

int main( void )
{
	int Trun = 1;
	int Hrun = 1;
	
	printf("BANG!!!!\nAND THE'RE OFF!!!!\n");
	
	srand(time(NULL));
	
	while(Trun <= 70 & Hrun <= 70)
	{
		TMove(&Trun);
		HMove(&Hrun);
		
		if(Trun == Hrun)
		{
			printf("OUCH!\n");
		}
		
		if(Trun < 1 )
		{
			Trun = 1;
		}
		
		if(Hrun < 1 )
		{
			Hrun = 1;
		}
		
		print(Trun, Hrun);
	}
	
	if(Trun >= SIZE || Hrun < SIZE)
	{
		printf("TORTOISE WINS!!!!YAY!!!\n");
	}
	
	if(Hrun >= SIZE || Trun < SIZE)
	{
		printf("HARE WINS!!!!!YUCH!!!!\n");
	}
	
	if(Hrun == Trun)
	{
		printf("THE MATCH ENDED IN DRAW!!!!!\n");
	}

	return 0;
}

void TMove(int *Trun)
{
	int num = 1 + rand() % 10;
	
	switch(num)
	{
		case 1 :
		case 2 :
		case 3 :
		case 4 :
		case 5 :
			*Trun += 3;
			break;
		
		case 6 :
		case 7 :
			*Trun -= 6;
			break;
		
		case 8 :
		case 9 :
		case 10	:
			*Trun += 1;
			break;
	}
}

void HMove(int *Hrun)
{
	int num = 1 + rand() % 10;
	
	switch(num)
	{
		case 1 :
		case 2 :
			break;
		
		case 3 :
		case 4 :
			*Hrun += 9;
			break;
			
		case 5 :
			*Hrun -= 12;
			break;
			
		case 6 :
		case 7 :
		case 8 :
			*Hrun += 1;
			break;
			
		case 9 :
		case 10	:
			*Hrun -= 2;
			break;
	}
}

void print(int Trun, int Hrun)
{
	for(int a = 0; a < SIZE; a++)
	{
		if( a == Trun)
		{
			printf("T");
		}
		else
		{
			printf(" ");
		}
	}
	
	if(Trun >= SIZE)
	{
		printf("T");
	}
	
	puts("");
	
	for(int a = 0; a < SIZE; a++)
	{
		if( a == Hrun)
		{
			printf("H");
		}
		else
		{
			printf(" ");
		}
	}
	
	if(Hrun >= SIZE)
	{
		printf("H");
	}
	
	puts("");
}

