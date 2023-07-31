#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void sentencechange(char *s);
void morzechange(char *s);

int main( void )
{
	char s[] = ".-   -... .-. --- .- -..";
	char *tokPtr;
	
	morzechange(s);
	//sentencechange(s);
	
		
	return 0;
}

void sentencechange(char *s)
{
	char symb[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	char *morze[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};
	char sCopy[10000] = "";
	int lengh;
	
	for(int counter = 0;toupper(s[counter]) != '\0'; counter++)
	{
		if(toupper(s[counter]) != ' ')
		{
			for(int i = 0; i <= 36; i++)
			{
				if(toupper(s[counter]) == symb[i] )
				{
					strcat(sCopy, morze[i]);
					lengh = strlen(sCopy);
					sCopy[lengh] = ' ';
					sCopy[lengh + 1] = '\0';
				}
			}
		}
		else
		{
			lengh = strlen(sCopy);
			sCopy[lengh] = ' ';
			sCopy[lengh + 1] = ' ';
			sCopy[lengh + 2] = ' ';
			sCopy[lengh + 3] = '\0';
		}
	}
	
	printf("%s\n", sCopy);
	
}

void morzechange(char *s)
{
	char symb[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	char *morze[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};
	char sCopy[10000] = "", string[50] = "";
	int lengh, flag = 0, i;
	
	for(int counter = 0; s[counter] != '\0';)
	{
		if(s[counter] == ' ')
		{
			flag++;
			counter++;
		}
		else
		{
			flag = 0;
			for(i = 0; s[counter] != ' ' && s[counter] != '\0'; i++)
			{
				string[i] = s[counter];
				counter++;
			}
			
			string[i] = '\0';
		}
		
		if(flag == 3)
		{
			lengh = strlen(sCopy);
			sCopy[lengh] = ' ';
			sCopy[lengh + 1] = '\0';
		}
		
		for(i = 0; i != 36; i++)
		{	
			if(strcmp(string, morze[i]) == 0)
			{
				lengh = strlen(sCopy);
				sCopy[lengh] = symb[i];
				sCopy[lengh + 1] = '\0';
				break;
			}
		}
		
		strcpy(string, "");
	}
	
	printf("%s\n", sCopy);
	
	}


