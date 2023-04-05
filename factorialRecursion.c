#include <stdio.h>
/**
  * 4! = 4 * 3!
  * 6! = 5 * 4!
  * !n = n * !(n-1)
  * factorial(n) = n * factorial(n - 1);
  * factorial - finds factorial of a number
  * @n: the number
  * Return: the factor value
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
/**
  * main - start
  *
  * Return: 0
  */
int main(void)
{
	int f = factorial(5);

	printf("5! is: %d", f);
	return (0);
}

