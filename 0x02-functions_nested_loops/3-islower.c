#include "main.h"
/**
 *_islower - describes check for lowercase character
 *@c: the character to be checked
 * Return: 1 for lowercase character or 0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
