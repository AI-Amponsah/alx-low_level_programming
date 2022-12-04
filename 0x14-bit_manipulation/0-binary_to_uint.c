#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*binary_to_uint - converts binary to decimal
*@b: constant  char pointer
*
*Return: unsigned int value
*/

unsigned int binary_to_uint(const char *b)
{

int sum = 0;
int power = 0;
int i;
int val;
const char *address;
address = b;

if (b == NULL)
{
return (0);
}

while (*b != '\0')
{
b++;
}
b--;
while (b >= address)
{
if (*b == '0' || *b == '1')
{
i = *b - '0';
val = i * (1 << power);
sum = sum + val;
b--;
power++;
}
else
{
return (0);
}
}
return (sum);
}
