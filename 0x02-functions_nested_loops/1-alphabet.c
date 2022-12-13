#include "main.h"
/**
 * print_alphabet-prints the alphabet
 *
 * Description:printing the alphabet
 *
 * Return:always 0
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; ++alp)
		_putchar(alp);
	_putchar('\n');
}
