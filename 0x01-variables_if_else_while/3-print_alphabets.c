#include <stdlib.h>
#include <stdio.h>

/**
 * main - To determine the alphabet in both lower case and upper case
 *
 * Return: 0 on success
 */

int main(void)
{
char i;
char z;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (z = 'A'; z <= 'Z'; z++)
{
putchar(z);
}
putchar('\n');
return (0);
}
