#include "main.h"
/**
 * puts_half - function declared
 * @str: assigned integer
 */
void puts_half(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; l++)
	;
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
	else
	{
		for (i = ((l - 1) / 2) + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
	_putchar('\n');
}
