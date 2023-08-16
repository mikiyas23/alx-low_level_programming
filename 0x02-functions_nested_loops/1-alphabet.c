#include "main.h"

/**
* print_alphabet - prints out lower case with putchar from a to z
*
* Return:void
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z';)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
