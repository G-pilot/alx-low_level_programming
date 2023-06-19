#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints all possible combinations of single-digit numbers
 *   in ascending order, separated by ", ".
 *   It utilizes the putchar function to print individual characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
