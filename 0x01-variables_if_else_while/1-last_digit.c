#include <stdlib.h>
#include <time.h>

/**
 * main - To determine random number of variable n
 *
 * Return: 0 on success
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int n;
char last[] = "Last digit of";

printf("%s %d is %d", last, n, n);
if (last, n > 5)
{
printf("and greater than 5\n");
}
else if (last, n < 6)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is 0");
}
return (0);

}
