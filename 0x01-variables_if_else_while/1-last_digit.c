#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the last digit of a randomly generated number
* and weather it is the last digit greater than 5, less than 6 or 0.
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int num = n % 10;

	if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num < 6 && num != 0)
	{
		printf("Last digit of %d is %d  and is less than 6 and not  0\n", n, num);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	}
	return (0);
}
