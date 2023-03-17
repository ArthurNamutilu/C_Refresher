#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 77272;
	int last;

	last = num % 10;   /* % 10 finds last digit of a number */
	printf("The last digit is %d \n", last);
	return (0);
}
