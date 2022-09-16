#include "main.h"
/**
 * print_line - prints a line
 *
 * @n: integer to print line
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
