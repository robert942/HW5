#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void stringReverse(char[]);

int main()
{
	char str[25];

	printf("String to reverse: ");
	scanf("%s", str);
	printf("\nString that is reversed is: \n");
	stringReverse(str);
}

void stringReverse(char* arrayString)
{
	if (*arrayString == '\0')
	{
		return;
	}
	else
	{
		stringReverse(arrayString + 1);
	}
	printf("%c", arrayString[0]);
}