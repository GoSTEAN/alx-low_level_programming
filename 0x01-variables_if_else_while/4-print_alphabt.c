#include <stdio.h>

/**
 * main - Prints some letters of alphbet
 *
 * Return: Always (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
		putchar (alphabet);
		}
	}

	putchar('\n');

	return (0);
}	
