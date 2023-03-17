#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char name[] = "Ricky";
	int marks = 73;
	char grade = 'B';
	float gpa = 8.1;

	printf("%s, grade: %c score: %d gpa: %f\n", name, grade, marks, gpa);
	return (0);
}
