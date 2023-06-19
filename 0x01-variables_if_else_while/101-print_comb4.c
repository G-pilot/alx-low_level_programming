#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints all possible different combinations of 
 *   three digits in ascending order, separated by ", ".
 *   It considers 012, 120, 102, 021, 201, and 210 as the same
 *   combination and only prints the smallest combination.
 *   It utilizes the putchar function to print individual characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int firstDigit;
	int secondDigit;
	int thirdDigit;

	for (firstDigit = 0; firstDigit <= 7; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 8; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				putchar(thirdDigit + '0');

				if (firstDigit != 7 || secondDigit != 8 || thirdDigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
