/*
 * main - Entry point of the program
 *
 * Description:
 *   This program assigns a random number to the variable 'n' each time it is executed.
 *   It then prints whether the number stored in 'n' is positive or negative.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() % 201 - 100;

	printf("%d ", n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
