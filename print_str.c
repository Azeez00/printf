#include "main.h"

/**
 * print_str - writes sequence of char to stdout
 * @str: arg type in variadic function
 * Return: length of characters written to stdout
*/

int print_str(va_list *str)
{
	char *newstr;
	int i, len = 0;

	char *s = va_arg(*str, char *);

	len = _strlen(s);

	newstr = malloc(sizeof(char) * (len + 1));

	if (!newstr)
		write(1, '\0', 1);
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			newstr[i] = s[i];
		}

		newstr[i] = '\0';

		write(1, s, len);
	}

	free(newstr);

	return (len);
}
