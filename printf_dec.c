#include "main.h"

/**
 * printf_dec - Prints decimal numbers
 * @i: integer variable
 * Return: Number of characters printed
 */
int printf_dec(int i)
{
	int j = 0;
	int k = i / 10;
	char str[k];

	intToString(i, str);
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	return (j);
}
