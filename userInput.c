#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * scanf("%s" string_var);
 * scanf("%d" &int_var);
 * scanf("%c" &char_var);
 *
 * fgets() receives strings with spaces from users
 */
int main(void)
{
	char movie[30];
	double rating;
	char grade;

	printf("Enter your all time favorite movie: \n");
	scanf("%s", movie); /* string doesnt need %smovie */
	printf("Grade your movie-> A/B/C/D \n");
	scanf("%c", &grade);
	printf("Rate the movie 0.0 - 10.0\n");
	scanf("%lf", &rating); /* %lf -> input will be a double */
	printf("Movie: %s, Rating: %f, Grade: %c\n", movie, rating, grade);

	return (0);
}
