#include <stdio.h>

/**
  * main - start
  *
  * Return: 0 Success
  */

int main(void)
{
	/**
	  * char dreamCity[15] = "Am";
	  * char guess[15];
	  */

	int secretNumber = 14;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;

	while (guess != secretNumber && outOfGuesses == 0)
	{
		if (guessCount < guessLimit)
		{
			printf("Guess the secret number: ");
			scanf("%d", &guess);
			guessCount++;
		}
		else
		{
			outOfGuesses = 1;
		}
	}
	if (outOfGuesses == 1)
	{
		printf("You reached the maximum number of guess trial\n");
	}
	else
	{
		printf("Correct the sectet number is %d\n", secretNumber);
	}
	return (0);
}
