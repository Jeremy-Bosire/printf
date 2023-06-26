#include "main.h"

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
			h++;
		}
		else if (format[a + 1] == 's')
		{
			_putchar(va_arg(args, *char));
			h++;
		}

	}
	va_end(args);
}
