#include <stdio.h>

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
else
{
	return (n * factorial(n - 1));
}
}

int main(void)
{
	int n = 5;
	int result = factorial(n);

	if (result != -1)
	{
		printf("The factorial of %d is %d \n", n, result);
	}
	return (0);
}
