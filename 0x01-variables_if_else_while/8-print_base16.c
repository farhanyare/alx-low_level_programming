#include <stdio.h>

/**
 * main - this program prints all the numbers
 *  of base 16 in lowercase
 *  Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 16)
	{
		putchar(i < 10 ? i + '0' : i + 'a' - 10);
		i++;
	}

	putchar('\n');

	return (0);
}
