#include "main.h"

/**
 * print_string - Function to print a string
 * @str: String to be printed
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	unsigned int i = 0, count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}

	return (count);
}

/**
 * _printf - Function that produces output according to a format
 * @format: String
 * @...: Variable number of arguments
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int a = 0, b = 0;
	char *str;
	va_list args;

	va_start(args, format);
	for (; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			switch (format[a + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					b++;
					a++;
					break;
				case 's':
					str = va_arg(args, char*);
					b += print_string(str);
					a++;
					break;
				case 'd':
					printf_dec(va_arg(args, int));
					a++;
					break;
				case 'i':
					printf_int(va_arg(args, int));
					a++;
					break;
				case 'u':
					printf_unt(va_arg(args, int));
					a++;
					break;
				case 'o':
					printf_oct(va_arg(args, int));
					a++;
					break;
				case 'x':
					printf_hex(va_arg(args, int));
					a++;
					break;
				case 'X':
					printf_HEX(va_arg(args, int));
					a++;
					break;
				default:
					_putchar(format[a + 1]);
					a++;
					b++;
					break;
			}
		}
		else
		{
			_putchar(format[a]);
			b++;
		}
	}

	va_end(args);
	return (b);
}

