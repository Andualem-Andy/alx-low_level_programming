#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: Return 0
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
