#include "main.h"

/**
 * printf_dec - Prints decimal numbers
 * @i: integer variable
 * Return: Number of characters printed
 */
int printf_dec(int i)
{
	int j = 0;
	int k = snprintf(NULL, 0, "%d", i) + 1;
	char *str = malloc(sizeof(char) * k);

	if (str == NULL)
	{
		return (0);
	}

	snprintf(str, k, "%d", i);
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	free(str);
	return (j);
}

