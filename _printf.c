#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: String
 * @...: Variable number of arguements
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int a = 0, b = 0, i;
	char *str;
	va_list args;

	va_start(args, format);

	for (; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			if (format[a + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				b++;
				a++;
			}
			else if (format[a + 1] == 's')
			{
				str = va_arg(args, char*);
				i = 0;
				while (str[i] != '\0')
				{
					_putchar(str[i]);
					i++;
					b++;
				}
				a++;
			}
			else
			{
				_putchar(format[a]);
				b++;
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
