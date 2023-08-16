#include "main.h"

/**
*print_alphabet_x10 - that ptints alphabets in lower case 10 timmes
*
*Return:void
*/

void print_alphabet_x10(void)
{
	char alp;
	int i;

	i = 0;

	while (i < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
		_putchar(alp);
		}

	_putchar('\n');
	i++;
	}
}
