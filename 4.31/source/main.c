#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k;
	for (i = 0; i <=4; i++)
	{
		for (j = 0; j <=4 - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
			if (j == 0)
				printf(" ");
		}
		for (k = 0; k < 7 - i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}