#include <stdio.h>

/**
  * main - start
  *
  * Return: 0 success
  */

int main(void)
{
	int num = 14;
	int * pNum = &num;
	double gpa = 8.7;
	double * pGpa = &gpa;
	char grade = 'A';
	char * pGrade = &grade;

	printf("num's memory adress: %p\n", &pNum);

	return (0);
}
