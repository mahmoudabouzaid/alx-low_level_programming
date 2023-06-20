#include "main.h"
/**
 * _abs - function that comutes the absolute
 *
 * @n: the number to be computed.
 *
 * Return: Absolute value of nimber or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
	
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
