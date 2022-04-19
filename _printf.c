#include "main.h"

/**
 * _printf - writes characters to stdout
 * @format: buffer holding characters
 * Return: length of charcter or -1 on failure and write errno to stderr
*/

int _printf(const char *format, ...)
{
	va_list args;
	char ch;
	int (*prints)(va_list *);
	int i, len;

	if (!format)
	{
		write(1, "(null)", 6);
		return (6);
	}

	va_start(args, format);

	len = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++; /* fast forward */
			ch = format[i];

			if (ch == '%')
			{
				len += write(1, "%", 1);
				continue;
			}

			prints = get_func(ch);
			len += prints(&args);
		}
		else
			len += write(1, &format[i], 1);
	}
	va_end(args);
	return (len);
}
