#include "main.h"

/**
 * octalToDecimal - Converts an octal value to decimal
 * @octal: Octal number
 * Return: Decimal value
 */
int octalToDecimal(int octal)
{
	int decimal = 0;
	int base = 1;

	while (octal != 0)
	{
		int digit = octal % 10;

		decimal += digit * base;
		base *= 8;
		octal /= 10;
	}

	return (decimal);
}
