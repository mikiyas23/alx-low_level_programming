#include <stdio.h>
/**
* main - Describe script prints alphabet in uppercase
*
* Return: 0(Success)
*/
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
