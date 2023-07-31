#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

char *search(char *s, char c, int *counter);
void print(int arr[]);

int main( void )
{
	char s[100];
	int c = 97;
	int counter = 0;
	int count = 0;
	char *searchPtr;
	int array[26] = {0};

	printf("Enter the string:");
	gets(s);

	while(count <= 25)
    {
        searchPtr = search(s, c, &counter);

        while(searchPtr != NULL)
        {
            searchPtr = searchPtr + 1;
            searchPtr = search(searchPtr, c, &counter);
        }

        array[count] += counter;
        counter = 0;
        count++;
        c++;
    }
    
    c = 65;
    count = 0;
    
    while(count <= 25)
    {
        searchPtr = search(s, c, &counter);

        while(searchPtr != NULL)
        {
            searchPtr = searchPtr + 1;
            searchPtr = search(searchPtr, c, &counter);
        }

        array[count] += counter;
        counter = 0;
        count++;
        c++;
    }

    print(array);

	return 0;
}

char *search(char *s, char c, int *counter)
{
	char *searchPtr;
	
	searchPtr = strchr(s, c);

	if(searchPtr != NULL)
	{
		*counter = *counter + 1;
	}

	return searchPtr;
}

void print(int arr[])
{
    char c = 97;
    for(int a = 0; a <= 25; a++)
    {
        printf("%c - %d\n", c, arr[a]);
        c++;
    }

}
