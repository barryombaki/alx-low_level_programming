#include "main.h"

/**
 * _strcat - concatenates two starings
 *
 * @dest: destination
 * @src: Source
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
