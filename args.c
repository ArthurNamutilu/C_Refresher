#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	printf("The argument count is: %d\n", argc);

	if (argc > 1)
	{
		printf("more arguments passed are:\n");
		for (i = 1; i < argc; i++)
		{
			printf("arc[%d] = %s\n", i, argv[i]);
			sum += atoi((argv[i]));
		}
		printf("total sum of passed int arguments is %d\n", sum);
	}
	else
	{
		printf("Only 1 argument values passed\n");
	}

	return (0);
}
