#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints all single-digit numbers of base 10, starting from 0,
 *   followed by a new line. It utilizes the putchar function to print individual characters.
 *   No char variables are used, and only putchar is called twice.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	putchar('0' + 0);
	putchar('0' + 1);
	putchar('0' + 2);
	putchar('0' + 3);
	putchar('0' + 4);
	putchar('0' + 5);
	putchar('0' + 6);
	putchar('0' + 7);
	putchar('0' + 8);
	putchar('0' + 9);
	putchar('\n');

	return 0;
}
