#include "main.h"
#include <unistd.h>

/**
 * _putchar - the function
 * @c: the character to output
 * Return: returns write function
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
