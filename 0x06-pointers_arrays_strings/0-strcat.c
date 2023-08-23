#include "main.h"
/**
 * _strcat - concatnates two strings
 *@dest: inputs value
 *@src: input value
 *Return: void
 */
char *_strcat(char *dest, char *src)
{
	int length, z;

	length = 0;
	while (dest[length] != '\0')
	{
	length++;
	}
	for (z = 0; src[z] != '\0'; z++, length++)
	{
		dest[length] = src[z];
	}
	dest[length] = '\0';
	return (dest);
}
