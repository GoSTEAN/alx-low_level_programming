#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always (Success)
 */

int main(void)
{
int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%i", i);
	}
	
	putchar('\n');

	return (0);
}	
