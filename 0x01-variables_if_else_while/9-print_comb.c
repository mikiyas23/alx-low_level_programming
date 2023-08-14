#include <stdio.h>
/**
 * main - Describes that prints all possible combinations
 * of single-digit numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		putchar(',');
	}
	return (0);
}
