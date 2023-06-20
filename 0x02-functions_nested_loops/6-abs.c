#include "main.h"
/**
 * _abs - function that comutes the absolute
 *
 * @n: takes in integer type input for function
 *
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
