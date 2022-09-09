#include <stdlib.h>
#include <stdio.h>

/**
 * main - To determine the alphabet in both lower case in reverse
 *
 * Return: 0 on success
 */

int main(void)
{
int i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}

putchar('\n');
return (0);
}
