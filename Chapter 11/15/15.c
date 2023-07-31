#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[])
{	
	char c, sentence[80];
	int i = 0, mode;
	
	FILE *fpi, *fpo;
	
	printf("Enter the mode:(1 in is keyboard, out is monitor)(2 enter the file names)");
	scanf("%d", &mode);
	
	if(mode == 1)
	{
		fpi = stdin;
		fpo = stdout;
	}
	else if(mode == 2)
	{
		char n1[20], n2[20];
		puts("Enter the file names:");
		scanf("%s%s", n1, n2);
		if((fpi = fopen(n1, "r")) == NULL || (fpo = fopen(n2, "w")) == NULL)
		{
			puts("Cant open the files");
			exit(1);
		}
	}
	
	if(mode == 1)
	{
		puts("Enter line of text:");
	}
	getchar();
	while((c = fgetc(fpi)) != '\n')
		sentence[i++] = c;
	
	sentence[i] = '\0';
	puts("\nThe line entered was:");
	fputs(sentence, fpo);	

	return 0;
}

