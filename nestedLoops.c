#include <stdio.h>

/**
  * main - start
  *
  * Return: 0 success
  */

int main(void)
{
	int i, j;
	int arr[4][3] = {
		{
			1, 2, 3
		},
		{
			4, 5, 6
		},
		{
			7, 8, 9
		},
		{
			10, 11, 12
		},
	};

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d, ", arr[i][j]);
		}
		printf("\n");
	}

	return (0);
}
