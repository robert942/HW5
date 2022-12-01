#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x, y;
	int array[36000] = { 0 };
	int square[6][6] = { {2,3,4,5,6,7},{3,4,5,6,7,8},{4,5,6,7,8,9},{5,6,7,8,9,10},{6,7,8,9,10,11},{7,8,9,10,11,12} };
	srand(time(NULL));
	for (int i = 0; i < 36000; i++)
	{
		x = rand() % 6;
		y = rand() % 6;
		array[i] = square[x][y];
		printf("%d\t%d\n", i + 1, array[i]);
	}
}