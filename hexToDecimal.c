#include "main.h"

/**
 * hexToDecimal - Converts a hexadecimal number to decimal
 * @hex: Hexadecimal number
 * Return: Decimal value
 */
int hexToDecimal(int hex)
{
	int decimal = 0;
	int base = 1;

	while (hex != 0)
	{
		int digit = hex % 10;

		decimal += digit * base;
		base *= 16;
		hex /= 10;
	}
	return (decimal);
}
