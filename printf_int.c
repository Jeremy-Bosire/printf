#include "main.h"

/**
 * printf_int - Prints a decimal regardless of whether it was an octal or hex
 * @i: The number
 * Return: The number of characters printed
 */
int printf_int(int i)
{
	int m, k, j = 0;
	char str[20];
	char *sent = NULL;

	intToString(i, str);

	if (str[0] == '0' && str[1] != '\0' && str[1] != 'x')
	{
		k = octalToDecimal(i);
		m = snprintf(NULL, 0, "%d", k) + 1;
		sent = malloc(sizeof(char) * m);
		if (sent != NULL)
		{
			snprintf(sent, m, "%d", k);
			while (sent[j] != '\0')
			{
				_putchar(sent[j]);
				j++;
			}
		}
	}
	else if (str[0] == '0' && str[1] == 'x')
	{
		k = hexToDecimal(i);
		m = snprintf(NULL, 0, "%d", k) + 1;
		sent = malloc(sizeof(char) * m);
		if (sent != NULL)
		{
			snprintf(sent, m, "%d", k);
			while (sent[j] != '\0')
			{
				_putchar(sent[j]);
				j++;
			}
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

	free(sent);
	return (j);
}

