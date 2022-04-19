#include "main.h"

/**
 * get_func - returning a callback function to its caller
 * @s: format specifier representation
 * Return: callback function or NULL if failed
*/

int (*get_func(char s))(va_list *)
{
	fmt_spec fmt[] = {
		{'c', print_char},
		{'s', print_str},
	};

	int i = 0;

	for (i = 0; i < 2; i++)
	{
		if (fmt[i].str == s)
			return (fmt[i].func);
	}
	return (NULL);
}
