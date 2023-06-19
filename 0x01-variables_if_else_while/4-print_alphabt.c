#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints the alphabet in lowercase, excluding the letters
 *   'q' and 'e',followed by a new line.
 *   It utilizes the putchar function to print individual characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
