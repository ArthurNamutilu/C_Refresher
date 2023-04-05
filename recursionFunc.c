#include <stdio.h>
/**
  * SumDigits -functions thet returns sum of all digits in an integer
  * @n: int value
  * Return: sum of integer values
  */
int SumDigits(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (n % 10 + SumDigits(n / 10));
}
/**
  * main - Start
  *
  * Return: 0
  */

int main(void)
{
	int j = SumDigits(783);

	printf("Sum of all digits is %d", j);

	return (0);
}
