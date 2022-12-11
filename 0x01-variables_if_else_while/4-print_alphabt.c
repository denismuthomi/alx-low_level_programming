#include <stdio.h>
/**
 * main-entry point
 *
 * Description: print a-z with the exception of q and e
 *
 * Return: always 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
			++alp;
		putchar(alp);
		++alp;
	}
	putchar('\n');
	return (0);
}
