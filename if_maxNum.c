#include <stdio.h>

/**
  * max - Finds the maximum of three numbers
  * @num1: first value to be compared
  * @num2: second value
  * @num3: third value
  *
  * Return: The maximum of the three numbers
  */

int max(int num1, int num2, int num3)
{
	int result;

	if (num1 > num2 && num1 > num3)
	{
		result = num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		result = num2;
	}
	else
	{
		result = num3;
	}
	printf("%d\n", result);
	return (result);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	max(14, 19, 24);
	return (0);
}
