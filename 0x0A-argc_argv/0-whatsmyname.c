#include "main.h"
<<<<<<< HEAD

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments passed to the func
 * @argv: an arry of the argc
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	char *name = argv[0];
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
=======
/*
 * C Program to Print the Program Name and All its Arguments
 */
#include <stdio.h>
 
void main(int argc, char *argv[])    /* command line Arguments */
{
    int i;
    for (i = 0;i < argc;i++)
    {
        printf("%s ", argv[i]);        /* Printing the string */
    }
    printf("\n");
}
>>>>>>> f4530cadcfd1258d21af5cb2573d3f14bc184a2d
