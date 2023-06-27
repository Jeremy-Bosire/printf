#include "main.h"

/**
 * printf_oct - Prints octal numbers
 * @i: Decimal number to be converted to octal
 * Return: The number of characters printed
 */
int printf_oct(int i)
{
	int count = 0, j = 0, l;
	int octalNum[100];

	while (i > 0)
	{
		octalNum[j] = i % 8;
		i /= 8;
		j++;
	}
	for (l = j - 1; l >= 0; l--)
	{
		int N = octalNum[l] + '0';

		_putchar((char)(N));
		count++;
	}
	return (count);
}
