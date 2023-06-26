#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: String
 * @...: Variable number of arguements
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int a = 0, b = 0;
	va_list args;

	va_start(args, format);

	for (; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			b++;
		}
		else if (format[a + 1] == 's')
		{
			_putchar(va_arg(args, *char));
			b++;
		}

	}
	va_end(args);
	return (b);
}
