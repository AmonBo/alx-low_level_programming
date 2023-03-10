#include <stdio.h>
/**
 * main - print name of the program.
 * @argc: number of command line arguments.
 * @argv: arrray of command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
