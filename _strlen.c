#include "main.h"

/**
 * _strlen - gets length of string
 * @str: the string
 * Return: length of string on success or 0 if otherwise
*/

int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);

	while (str[len] != '\0')
		len++;

	return (len);
}
