#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function print "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
