#include <stdio.h>
/**
  * main - storing variable address to a pointer
  *
  * Return: 0
  **/
int main()
{
	int age;
	int *p;

	age = 23;
	p = &age;

	printf("Address of 'age' is : %p\n", &age);
	printf("Address of 'p' is : %p\n", p);
}
