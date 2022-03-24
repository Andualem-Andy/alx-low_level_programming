#include <stdio.h>
	#include "main.h"
	

	/**
	 * exponent - x to the power of y
	 * @x: base number
	 * @y: exponent
	 * Description: calcuates x^y
	 * Return: x^y
	 *
	 **/
	

	int exponent(int x, int y)
	{
		int power;
	

		power = x;
	

		if (x == 0)
			return (0);
		if (y == 0)
			return (1);
	

		while (y >= 2)
		{
			power  = power * x;
			y--;
		}
		return (power);
	}

