#include <stdio.h>

/**
  * main - storing adress of variable into o pointer
  *
  * Return: Always 0.
  */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Adress of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	return (0);
}
