#include <unistd.h>
/**
 * _putchar - wwrites the character c to stdout
 * @c: The character to print 
 * Return: On success 1.
 * On error, -1 is returned,and errno is set appropritely.
 */
int _putchar(char c)
{
	retun (write(1, &c, 1));
}
