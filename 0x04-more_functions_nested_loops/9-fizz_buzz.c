#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 by a new line.
 * but for multiples of three prints fizz instead of the number
 * and for the multiples of five prints BUZZ
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("FIZZ");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("BUZZ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FIZZBUZZ");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
