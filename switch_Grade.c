#include <stdio.h>

/**
  * main - start
  *
  * Return: 0 > true
  */

int main(void)
{
	char grade;
	int score;

	printf("Enter your score on the test (0 - 100): ");
	scanf("%d", &score);

	if (score <= 39)
	{
		grade = 'D';
	}
	else if (score <= 60)
	{
		grade = 'C';
	}
	else if (score <= 70)
	{
		grade = 'B';
	}
	else if (score <= 100)
	{
		grade = 'A';
	}

	switch (grade)
	{
		case 'A':
			printf("You did great, your grade is %c score: %d\n", grade, score);
			break;
		case 'B':
			printf("Good work your grade is %c score: %d\n", grade, score);
			break;
		case 'C':
			printf("Pass grade %c score: %d\n", grade, score);
			break;
		case 'D':
			printf("Try again, you almost there grade %c score: %d\n", grade, score);
			break;
	}

	return (0);
}
