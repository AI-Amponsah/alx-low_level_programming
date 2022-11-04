#include <stdio.h>

/**
  * main - Prints number of arguments from command line
  *@argc: Argument count
  *@argv: Argument vector
  *Return: Always 0
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	if (argc >= 1)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
