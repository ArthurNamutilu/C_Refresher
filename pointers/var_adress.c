#include <stdio.h>
/**
  * main - get variables adresses
  *
  * Return: 0
  **/
int main(void)
{
	int n;
	char g;

	printf("Adress of variable 'n' is: %p\n", &n);
	printf("Adress of variable 'g' is: %p\n", &g);

	return(0);
}
