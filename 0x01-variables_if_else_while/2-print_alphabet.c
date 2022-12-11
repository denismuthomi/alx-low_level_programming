#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing a-z
 *
 * Return: always 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}

	putchar('\n');
	return (0);
}
