#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range -  function that creates an array of integers
 * @min: int var
 * @max: int var
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}
