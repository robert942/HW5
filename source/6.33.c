#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int search, ans;
	int data[] = { 3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93 };

	printf("input the data: ");
	scanf_s("%d", &search);

	ans = binarysearch(data, search, sizeof(data) / sizeof(int));

	if (ans < 0)
	{
		printf("can't find %d\n", search);
	}
	else
	{
		printf("the data is in data[%d] the value is %d\n", ans, search);
	}

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (data[mid] == search)
		{
			return mid;
		}
		else if (data[mid] > search)
		{
			high = mid - 1;
		}
		else if (data[mid] < search)
		{
			low = mid + 1;
		}
	}

	return -1;
}