#include "main.h"

/**
 * printf_HEX - Prints hexadecimal numbers
 * @i: Decimal number to be converted to hex
 * Return: The number of characters printed
 */
int printf_HEX(int i)
{
	int count = 0, j = 0, l;
	int hexNum[100];

	while (i > 0)
	{
		hexNum[j] = i % 16;
		i /= 16;
		j++;
	}
	for (l = j - 1; l >= 0; l--)
	{
		int N = hexNum[l] + '0';

		if (N > 57)
		{
			N = N + 7;
		}
		_putchar((char)(N));
		count++;
	}
	return (count);
}
