#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
