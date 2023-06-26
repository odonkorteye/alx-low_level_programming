#include <unistd.h>

/**
 * _putchar - character c to stdout
 * @c: The character to print
 *
 * Return: 1 as sucess, and -1 as error
 * 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
