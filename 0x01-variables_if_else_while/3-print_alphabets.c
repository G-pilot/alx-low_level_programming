#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints the alphabet in lowercase, followed by a new line,
 *   and then prints the alphabet in uppercase, followed by a new line.
 *   It utilizes the putchar function to print individual characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
