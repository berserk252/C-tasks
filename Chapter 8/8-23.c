#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char s1[], char s2[], char s3[]);

int main()
{
    char s1[50];
    char s2[50];
    char s3[50];

    printf("Enter 3 sentences:");
    gets(s1);
    gets(s2);
    gets(s3);

    puts("");

    print(s1, s2, s3);

    return 0;
}

void print(char s1[], char s2[], char s3[])
{
    if(s1[0] == 'b' || s1[0] == 'B')
    {
        printf("%s\n", s1);
    }

     if(s2[0] == 'b' || s2[0] == 'B')
    {
        printf("%s\n", s2);
    }

     if(s3[0] == 'b' || s3[0] == 'B')
    {
        printf("%s\n", s3);
    }
}
