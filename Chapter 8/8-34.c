#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void analyzeSymb(char *s, int array[][2]);
void analyzeWord(char *s, int array[][2]);
int analyzeText(char *, int [], char *[]);

int main( void )
{
	char s[] = "To Be, or Not to be: to is that is a question aaa:";
	char *strPtr[100];
	int array[100] = {0};
	int counter;

	counter = analyzeText(s, array, strPtr);

	printf("%s\n", strPtr[7]);

	for(int i = 0; *(strPtr[8] + i) != '\0'; i++)
    {
        printf("%c", *(strPtr[8] + i) );
    }

    puts("");

	for(int i = 0; i < counter; i++)
	{
	    printf("%s - %d\n", strPtr[i], array[i]);
	}

	return 0;
}

void analyzeSymb(char *s, int array[][2])
{
	for(int counter = 0;s[counter] != '\0'; counter++)
	{
		if(toupper(s[counter]) >= 65 && toupper(s[counter]) <= 90)
		{
			array[toupper(s[counter]) - 'A'][1] += 1;
		}
	}

}

void analyzeWord(char *s, int array[][2])
{
	int counter = 0;

	while(*s != '\0')
	{
		counter = 0;

		while(1 && *s != '\0')
		{

			if(*s == ' ' || ispunct(*s) )
			{
				if(*s == 39 || *s == 145 || *s == 146)
				{

				}
				else
				{
					s++;
					break;
				}
			}

			counter++;
			s++;
		}

		if(counter != 0)
		{
			array[counter][1]++;
		}
	}
}

int analyzeText(char *s, int array[], char *strPtr[])
{
	int counter = 0;
	char *ptr = NULL;
	char sCopy[1000];
	int flag;
	int i;

	for(i = 0; s[i] != '\0'; i++)
	{
		sCopy[i] = tolower(s[i]);
	}

	sCopy[i] = '\0';
	printf("%s\n", sCopy);
	ptr = strtok(sCopy, " ,?!@#$%^&*():;''|><.{}[]+-*=`~_");

	while(ptr != NULL)
	{
		flag = 0;

		for(i = 0; i < counter; i++)
		{
			if(strcmp(ptr, strPtr[i]) == 0)
			{
				array[i]++;
				flag++;
				break;
			}
		}

		if(flag == 0)
		{
			strPtr[counter] = ptr;
			array[counter]++;
			counter++;
		}

		ptr = strtok(NULL, " ,?!@#$%^&*():;''|><.{}[]+-*=_`~");
	}

	/*for(int i = 0; i < counter; i++)
	{
	    printf("%s - %d\n", strPtr[i], array[i]);
	}*/

	return counter;
}
