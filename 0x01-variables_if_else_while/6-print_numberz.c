#include <stdio.h>

/**
 * main - this program prints ll single digit numbers
 * of base 10 starting from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
