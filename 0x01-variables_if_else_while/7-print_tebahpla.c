#include <stdio.h>
/**
 * main - Describes code prints alphabet from z to a
 * Return: Always 0 (Success)
 */
int main(void)
{

	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
