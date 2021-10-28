#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float a,b;
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &a);
	b = 200 + a * 0.09;
	if (a != -1)
	{
		printf("Salary is:%.2f", b);
	}
	
	
}