#include <unistd.h>
#include <main.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main()
{
	int ch;
	for(ch = 'A'; ch<='Z'; ch++)
		putchar(ch);
	   return 0;
}
