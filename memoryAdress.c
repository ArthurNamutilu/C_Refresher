#include <stdio.h>

/**
  * main - start
  *
  * WORKS ON CODE BLOVKS NOT IN TERMINAL IDK WHY BUT WILL FOUND OUT
  *
  * Return: (0) Success
  */

int main(void)
{
	int year = 2023;
	char theme[7] = "CODE!";
	double desire = 8.7;


	printf("year: %p\n theme: %p\n motivationRate: %p", &year, &theme, &desire);

	return (0);
}
