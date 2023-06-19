#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints all possible combinations of
 *   two two-digit numbers
 *   ranging from 0 to 99, in ascending order,
 *   separated by a space and comma.
 *   Each number is printed with two digits,
 *   and the combinations are printed in ascending order.
 *   It considers 00 01 and 01 00 as the same combination
 *   of the numbers 0 and 1.
 *   It utilizes the putchar function to print individual
 *   characters.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 != 98 || num2 != 99)
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
