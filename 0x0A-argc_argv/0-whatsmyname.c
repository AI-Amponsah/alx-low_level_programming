#include <stdio.h>

/**
  * main - prints name of a program
  *@argc: argument count
  *@argv: Argument vector
  *Return: Always 0
  */

int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);

}
