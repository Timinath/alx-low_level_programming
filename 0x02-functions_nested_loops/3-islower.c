#include "main.h"
/**
 * _islower - check if lower case
 * @c: int used for function argument
 * Return: 0;
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
