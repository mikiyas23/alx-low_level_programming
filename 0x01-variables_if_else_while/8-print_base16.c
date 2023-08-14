#include <stdio.h>
/**
 * main - Description prints all the numbers of base 16 in lowercase
 *
 *Return: 0 (Success)
 */
int main(void)
{

	int i;

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
