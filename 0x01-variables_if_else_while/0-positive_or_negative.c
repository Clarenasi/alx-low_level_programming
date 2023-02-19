#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main -  Program assign a random number to the variable n each time it is executed
 * 	   and states whether its positive or negative
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if number is greater than 0: is positive 
	 * if number is 0: is zero
	 * if number is less than 0: is negative
	 */
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
