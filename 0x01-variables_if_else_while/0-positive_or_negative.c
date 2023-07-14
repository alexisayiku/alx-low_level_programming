#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Description: Assigns a random number to variable n and prints if it's positive or negative.
*
* Return: 0 (Success)
*/
int main(void)
{
srand(time(0)); /* Initialize random seed */
int n = rand(); /* Generate a random number */
printf("The number %d is ", n);
if (n > 0)
printf(" %d is positive\n");
else if (n == 0)
printf(" %d is zero\n");
else
printf(" %d is negative\n");
return (0);
}
