#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiples two arguemnts
  *@argc: Argument counter
  *@argv: Argument vector
  *Return: Always 0
  */

int main(int argc, char **argv)
{
int mul = 0;


if (argc <= 2 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);

mul = a * b;
printf("%d\n", mul);
}
return (0);
}
