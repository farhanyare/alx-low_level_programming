#include <stdio.h>

/**
 * main - this program prints all possible combination
 * s of single-digit numbers. seperated by coma
 * Return: Always 0 (success)
 */

int main(void)
{

	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
