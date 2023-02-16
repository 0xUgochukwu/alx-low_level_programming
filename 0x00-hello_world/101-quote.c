#include<unistd.h>
#include<string.h>

/**
 * main - This is the main Function
 * Description: This function writes to the standard error output stream
 * Return: It returns an error (1)`
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, text, sizeof(char) * strlen(text));

	return (1);
}

