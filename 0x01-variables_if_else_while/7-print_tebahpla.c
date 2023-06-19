#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints the lowercase alphabet in reverse,
 *   followed by a new line.
 *   It utilizes the putchar function to print individual characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
