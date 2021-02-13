#include <stdio.h>
/**
 *main - entry point 
 *
 *Description: Prints the largest prime factor of the
 *number 612852475143
 *Return: 0 
 */
int main(void)
{
	unsigned long largestf = 0;
	unsigned long lowestf = 2;
	unsigned long num = 612852475143;

	while (num != 1)
	{
		lowestf = 2;
		while ((num % lowestf) != 0)
			lowestf++;

		num = num / lowestf;

		if (lowestf > largestf)
			largestf = lowestf;
	}

	printf("%lu\n", largestf);
	return (0);
}