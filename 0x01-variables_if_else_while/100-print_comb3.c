#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints all possible different combinations of two
 *   digits in ascending order, separated by ", ".
 *   It considers 01 and 10 as the same combination
 *   and only prints the smallest combination.
 *   It utilizes the putchar function to print individual characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit <= 8; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');

			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
