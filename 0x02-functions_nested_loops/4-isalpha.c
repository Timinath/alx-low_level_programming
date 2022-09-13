#include "main.h"
/**
 * _isalpha - check if c is a letter, upper or lowercase
 * @c: int used for argument function
 * Return: 0;
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
	return (0);
}
