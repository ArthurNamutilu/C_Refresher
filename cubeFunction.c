#include <stdio.h>

/**
 * cube -The programs find the cube of a given number
 * @num: - value to be cubed
 *
 * Return: The cube of the number
 */

double cube(double num)
{
	double result = num * num * num;

	printf("%f\n", result);
	return (result);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	cube(7);
	return (0);
}
