#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: the number to start printing from
 * Returns: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (n = 0; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
			break;
		}
		else
		{
			for (n = 0; n >= 98; n--)
			{
				if (n == 98)
				{
					printf("%d", n);
					printf("\n");
					break;
				}
				else
				{
					printf("%d, ", n);
				}
			}
		}
	}
	}
}
