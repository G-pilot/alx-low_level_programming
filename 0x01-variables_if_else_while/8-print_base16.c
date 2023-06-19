#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints all the numbers of base 16 (hexadecimal) in lowercase,
 *   followed by a new line. It utilizes the putchar function to print individual characters.
 *   It uses three calls to putchar to print the numbers.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
