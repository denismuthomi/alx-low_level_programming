#include <stdio.h>
/**
 * main-entry point
 *
 * Description: a program that prints two-digit numbers
 *
 * Return:always 0
 */
int main(void)
{
	int y, m;

	for (y = 0; y <= 98; y++)
	{
		for (m = y + 1; m <= 99; m++)
		{
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			if (y == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
