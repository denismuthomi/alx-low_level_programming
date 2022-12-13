#include "main.h"
/**
 * main-entry point
 *
 * Description:print_putchar
 *
 * Return:always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int a;

	for (a = 0; a < 8; ++a)
		_putchar(str[a]);
	_putchar('\n');

	return (0);
}
