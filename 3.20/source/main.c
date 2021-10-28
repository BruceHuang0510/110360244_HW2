#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b,c;
	printf("Enter # of hous worked :");
	scanf_s("%d", &a);
	if (a != -1)
	{
		printf("Enter hourly rate of the worker :");
		scanf_s("%d", &b);
		c = 400 + (a - 40)*1.5*b;
		if (a > 40)
		{
			printf("Salary is %d", c);
		}
		else
		{
			printf("Salary is %d", a*b);
		}

	}

}