#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void textAlign(char *str);

int main( void )
{
	char str[] = "There is a wide choice of different professions and I`d like to tell you about my hesitation what to choose. In my childhood I wanted to become a famous singer or actor but when I was aware of all the difficulties of these professions I decided to refuse of my dream. Then I was going to become a vet. I imagined myself treating different animals, taking care of them, feeding and walking with them in the park, but this dream hadn`t also come true.It goes without saying that every person must choose his profession according his natural abilities and inclinations to it. So I have decided to connect my life with a profession of a teacher because I am sure that it`s my cup of tea. On the one hand it`s a great responsibility for children, on the other hand it`s a very interesting, exciting and valuable profession in our life. Besides you won`t be able to succeed as a teacher if you don`t like children. Your success depends on a lot of things. At first you should be communicative, very organized and hardworking. You must be skilful in your profession. It is also necessary to understand pupils, give them a helping hand and be ready to solve their problems. More than that you must be polite and tactful.";
	
	textAlign(str);
	
	return 0;
}


void textAlign(char *str)
{

	char *tPtr;
	char chrArr[65] = "";
	char chrArrCopy[65] = "";
	int len, symbCounter = 0, counter;
	int a;
	
	tPtr = strtok(str, " ");
	
	while(tPtr != NULL)
	{
		len = 0;
		while(symbCounter + len <= 65 && tPtr != NULL)
		{
			len = strlen(tPtr);
			len++;
			symbCounter += len;
			strcat(chrArr, tPtr);
			
			chrArr[symbCounter - 1] = ' ';
			tPtr = strtok(NULL, " ");
		}
		
		symbCounter--;
		counter = 0;
		
		if(symbCounter < 65)
		{
			for(int i = 0; symbCounter + i != 65; i++)
			{
				while(1)
				{
					if(chrArr[counter] == ' ')
					{
						strncpy(chrArrCopy, chrArr, counter + 1);
						
						chrArrCopy[counter + 1] = ' ';
						
						chrArrCopy[counter + 2] = '\0';
						counter += 1;
						for(a = counter; chrArr[a] != '\0'; a++)
						{
							chrArrCopy[a + 1] = chrArr[a];
						}
						strncpy(chrArr, chrArrCopy, a + 1);
						counter++;
						break;
						
					}
					if(counter >= 65)
					{
						counter = 0;
						break;
					}
					else
					{
						counter++;
					}
					
				}
			}
		}
		
		printf("\t%s\n", chrArr);
		
		for(int i = 0; i <= 66; i++)
		{
			chrArr[i] = '\0';
		}
			
		symbCounter = 0;
		
		tPtr = strtok(NULL, " ");

	}
		
}
