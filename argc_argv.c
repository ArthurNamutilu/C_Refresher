#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("The name of the program is %s\n", argv[0]);

	if (argc > 1)
	{
		printf("Additional arguments passed:\n");
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("No additional arguments passed.\n");
	}
	return (0);
}
