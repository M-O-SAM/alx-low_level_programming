#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A function that allocated memory using malloc.
 * @b: integer variables that holds the memory size
 * Return: 0 means program was succesful
 */
void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
