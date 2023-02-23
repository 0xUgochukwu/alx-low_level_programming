#include <stdio.h>

/**
 * main - get the highest prime factor (hpf)
 * of 612852475143
 *
 * Return: Always (0)
 */


int main(void)
{
	long int n = 612852475143;
	long int hpf;

	for (hpf = 2; hpf < n; hpf++)
	{
		if (n % hpf == 0)
		{
			n /= hpf;
		}
	}

	printf("%ld\n", hpf);

	return (0);
}
