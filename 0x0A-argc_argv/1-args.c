<<<<<<< HEAD
#include "main.h"

/**
 * main - print number of args passed
 *
 * @argc: number of args
 * @argv: array of the passed args
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	_putchar('0' + (argc - 1));
	_putchar('\n');
	return (0);
}
=======
#include <stdio.h>
#include "main.h"

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}
>>>>>>> f4530cadcfd1258d21af5cb2573d3f14bc184a2d
