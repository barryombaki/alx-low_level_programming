#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: a string passed to the function
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++len;
		s++;
	}
	return (len);
}

