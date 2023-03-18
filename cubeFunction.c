#include <stdio.h>

/**
 * main - Entry point
 *
 * cube - cubes an entered value;
 *
 * Return: Always 0 (Success)
 */

double cube(double num)
{
	double result = num * num * num;

	printf("%f\n", result);
	return (result);
}

int main(void)
{
	cube(7);
	return (0);
}
