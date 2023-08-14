#include <stdio.h>
/**
 *main - Entry Point
 *Description: 'print number of base 10 using putchar'
 *Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
