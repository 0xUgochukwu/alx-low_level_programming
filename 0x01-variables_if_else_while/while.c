#include<stdio.h>


int main(void)
{
	int n = 10;

	while (n > 0)
	{
		printf("%i\n", n--);
	}
	
	// now n = 0
	printf("--------------\n");

	do {
		n++;
		printf("%i\n", n);
	} while (n < 10);


	printf("while loop is done");
}
