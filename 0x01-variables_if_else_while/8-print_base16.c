#include <stdio.h>
/**
 * main - Description prints all the numbers of baseis 16 in lowercase
 *
 *Return: 0 (Success)
 */
int main(void)
{

int i;

for (i = 0; i < 10; i++)
{
	putchar(i + 48);
}
for (i = 'a'; i <= 'f'; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
