#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	printf("Size of a char: %lu byte(s)\m", sizeof(char));
	printf("Size of a int: %lu byte(s)\m", sizeof(int));
	printf("Size of a long int: %lu byte(s)\m", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\m", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\m", sizeof(float));
	return (0);
}	

