#include "main.h"
/**
 * positive_or_negative - Determine if a number is positive, negative or zero
 * @i: is the numberto be checked
 * Return: 0(Success)
 */
void positive_or_negative(int i)
{
	int i;

	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return (0);
}
