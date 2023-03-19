#include <stdio.h>

/**
  * main - code start
  *
  * Return: 0 Sucess
  */

int main(void)
{
	double num1;
	double num2;
	char op;
	double result;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op);                                  /* space before %c */
	printf("Enter second number: ");
	scanf("%lf", &num2);

	if (op == '+')
	{
		result = num1 + num2;
	}
	else if (op == '-')
	{
		result = num1 - num2;
	}
	else if (op == '*' || op == 'x')
	{
		result = num1 * num2;
	}
	else if (op == '/')
	{
		result = num1 / num2;
	}
	else
	{
		printf("invalid operator");
	}

	printf("%f %c %f = %f \n", num1, op, num2, result);
	return (0);
}
