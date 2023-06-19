#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints all single-digit numbers of base 10, starting from 0,
 *   followed by a new line. It utilizes the putchar function to print individual characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return 0;
}
