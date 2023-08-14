#include <stdio.h>

/**
* main - Describes that the number from 0 to 10.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 0;
	{
	while (i < 10)
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
