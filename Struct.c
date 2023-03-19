#include <stdio.h>
#include <string.h>
struct Car
{
	char model[20];
	int year;
	double rating;
};

/**
  * main - start
  *
  * Return - 0 success
  */

int main(void)
{
	struct Car mercedes;

	strcpy(mercedes.model, "eClass"); /* strcpy(destination, stringToBeStored) */
	mercedes.year = 2021;
	mercedes.rating = 9.1;

	printf("Car: %s manufactured year: %d users rating: %f\n", mercedes.model, mercedes.year, mercedes.rating);

	return (0);
}
