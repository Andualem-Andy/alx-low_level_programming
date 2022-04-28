#include "holberton.h"

/**
 * set_bit - sets value of bit to 1.
 *@index: the index, starting from 0, of bit you want to set
 *@n: pointer
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	while (n == NULL || index >= 64)
		return (-1);
			*n |= 1 << index;
	return (1);
}
