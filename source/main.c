#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Please enter an integer: ");


	int a;
	scanf("%d", &a);
	
	printf("The number is an ");

	int b = a % 2;
	if (b == 1 || b == -1)
	{
		printf("odd number");
	}
	else
	{
		printf("even number");
	}

	printf("\n");
	return 0;
}