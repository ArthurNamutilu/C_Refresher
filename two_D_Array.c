#include <stdio.h>
/**
  * main - start
  *
  * Return: 0
  */
int main(void)
{
	int a[4][3] = {
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8},
		{9, 0, 0}
	};
	int i, j;

	/* output each array element */
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	return (0);
}
