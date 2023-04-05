#include <stdio.h>
/**
  * factorial - factor of an integer
  * @n: int value
  *
  * Return: factor result
  */
int factorial(int n)
{
	int i = 1;
	int result = 1;

	while (i <= n)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/**
  * main - Start
  *
  * Return: 0
  */

int main(void)
{
	int f = factorial(5);

	printf("5! is: %d\n", f);
	return (0);
}
