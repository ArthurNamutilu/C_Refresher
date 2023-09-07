#include <stdio.h>
/**
  * main - usins sizeof() to dynamically determine size of char, int, float
  *
  * Return: always 0
  **/
int main(void)
{
	printf("Size of 'char' is: %lu bytes\n", sizeof(int));
	printf("Size of 'float' is: %lu bytes\n", sizeof(float));
	printf("Size of 'char' is: %lu bytes\n", sizeof(char));

	return (0);
}
