#include <stdio.h>

/**
 * main - this program prints all single digit numbers
 * of base 10 starting from 0
 * Return: always 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}

	printf("\n");

	return (0);
}

