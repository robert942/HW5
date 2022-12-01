#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int b[] = { 10, 20, 30, 40 };
	int *bPtr = b;
	int i, offest;

	printf("Array b printed with:\nArray subscript notation\n");
	for (i = 0; i < 4; i++)
		printf("b[%d] = %d\n", i, b[i]);

	printf("\nPointer/offest notation where\nthe pointer is the array name\n");
	for (offest = 0; offest < 4; offest++)
		printf("*(b + %d) = %d\n", offest, *(b + offest));

	printf("\nPointer subscript notation\n");
	for (i = 0; i < 4; i++)
		printf("bPtr[%d] = %d\n", i, bPtr[i]);

	printf("\nPointer/offest notation\n");
	for (offest = 0; offest < 4; offest++)
		printf("*(bPtr + %d) = %d\n", offest, *(bPtr + offest));

	system("pause");
	return 0;
}

void bubbleSort(int * const array, const int size)
{
	void swap(int *element1Ptr, int *element2Ptr);
	int pass, j;

	for (pass = 0; pass < size - 1; pass++)
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
}

void swap(int *element1Ptr, int *element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}