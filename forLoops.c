#include <stdio.h>

/**
  * main - start
  *
  * Return: 0 Success
  */

int main(void)
{
	int luckyNumbers[] = {2, 7, 9, 14, 21};

	int i;

	/* int arrSize = sizeof(luckyNumbers) / sizeof(luckyNumbers[0]); */

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", luckyNumbers[i]);
	}
	return (0);
}
