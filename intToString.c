#include "main.h"

/**
 * intToString - Converts an integer to a string
 * @num: The number that you want to convert into a string
 * @str: String variable
 */
void intToString(int num, char *str)
{
	int i = 0;
	int isNegative = 0;

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
	do {
		str[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);

	if (isNegative)
	{
		str[i++] = '-';
	}

	str[i] = '\0';

	int start = 0;
	int end = i - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
