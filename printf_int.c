#include "main.h"

/**
 * printf_int - Prints a decimal irregardless of whether it was an octal or hex
 * @i: The number
 * Return: The number of characters printed
 */
int printf_int(int i)
{
	int m, k, j = 0;
	char str[20];

	intToString(i, str);
	if (str[j] == '0')
	{
		k = octalToDecimal(i);
		m = k / 10;
		char sent[m];

		intToString(k, sent);
		while (sent[j] != '\0')
		{
			_putchar(sent[j]);
			j++;
		}
	}
	else if (str[j] == '0' && str[j + 1] == 'x')
	{
		k = hexToDecimal(i);
		m = k / 10;
		char sent[m];

		intToString(k, sent);
		while (sent[j] != '\0')
		{
			_putchar(sent[j]);
			j++;
		}
	}
	else
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	return (j);
}
