#include <stdio.h>
/**
  * main - start
  *
  * Return: 0
  */

int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 300;

	/* takes the address to var */
	ptr = &var;

	/* take the adress of ptr using &* operator */
	pptr = &ptr;

	/* take the value using pptr */
	printf("Value of var = %d\n", var);
	printf("Value of *ptr (Value pointed by ptr) = %d\n", *ptr);
	printf("Value available at **pptr = %d\n", **pptr);
	printf("value of ptr is: %p\n", ptr);
	printf("value of pptr is: %p\n", pptr);

	return (0);
}
