#include <stdio.h>
#include <stdlib.h>

/**
 * main: Entry point
 * @argc: arg count
 * @argv: arg vector
 * return: sucess
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS)
}
