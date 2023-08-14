#include <stdio.h>
/**
 * main - Description the script excutes alphabets in lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while ('a' <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
	putchar('\n');

	return (0);
}
