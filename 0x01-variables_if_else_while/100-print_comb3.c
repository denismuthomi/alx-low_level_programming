#include <stdio.h>
/**
 * main-entry point
 *
 * Description: a program that prints the combination of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		if (a < b)
		{
			putchar(a);
			putchar(b);
			if (a != '8' || (a == '8' && b != '9'))
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
