#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[])
{
	FILE * fp;
	char word[10], number[10], fold[2];
	char *symb[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "XYZ"};
	
	if((fp = fopen("word", "rb+")) == NULL)
	{
		printf("Cant open the file");
		exit(1);
	}
	
	printf("Enter phone number:");
	scanf("%s", number);
	
	fold[1] = '\0';
	
	for(int i = 0; i < 7; i++)
	{
		fold[0] = number[i];
		if(atoi(fold) == 0 || atoi(fold) == 1)
		{
			printf("The phone number has 0 or 1");
			exit(1);
			
		}
		word[i] = symb[atoi(fold) - 2][0];
	}
	int arr[7] = {0};
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			for(int k = 0; k < 3; k++)
			{
				for(int n = 0; n < 3; n++)
				{
					for(int m = 0; m < 3; m++)
					{
						for(int y = 0; y < 3; y++)
						{
							for(int a = 0; a < 3; a++)
							{
								fprintf(fp, "%s\n", word);
								word[6]++;
								if(word[6] == 'Q' || word[6] == 'W')word[6]++;
							}
							word[6] -= 3;
							if(word[6] == 'Q' || word[6] == 'W')word[6]--;
							
							word[5]++;
							if(word[5] == 'Q' || word[6] == 'W')word[5]++;
						}
						word[5] -= 3;
						if(word[5] == 'Q' || word[6] == 'W')word[5]--;
							
						word[4]++;
						if(word[4] == 'Q' || word[4] == 'W')word[4]++;
					}
					word[4]-=3;
					if(word[4] == 'Q' || word[4] == 'W')word[4]--;
						
					word[3]++;
					if(word[3] == 'Q' || word[3] == 'W')word[3]++;
				}
				word[3]-=3;
				if(word[3] == 'Q' || word[3] == 'W')word[3]--;
				
				word[2]++;
				if(word[2] == 'Q' || word[2] == 'W')word[2]++;
			}
			word[2]-=3;
			if(word[2] == 'Q' || word[2] == 'W')word[2]--;
			
			word[1]++;
			if(word[1] == 'Q' || word[1] == 'W')word[1]++;
		}
		word[1]-=3;
		if(word[1] == 'Q' || word[1] == 'W')word[1]--;
		
		word[0]++;
		if(word[0] == 'Q' || word[0] == 'W')word[0]++;
	}
	fclose(fp);
	return 0;
}

