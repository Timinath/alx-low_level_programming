#include "main.h"
int _square_root(int, int);

/**
 * _sqrt_recursion - funtion that returns square root
 * @n: int n
 * Return: int
 **/
int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}
/**
 * _square_root - Child Function
 * @n: Number whose square root is to be calculated
 * @count: Placeholder count
 * Return: square_root
 */
int _square_root(int n, int count)
{
	if (n < 0)
		return (-1);
	if ((count * count) > n)
		return (-1);
	if (count * count == n)
		return (count);

	return (_square_root(n, count + 1));
}
