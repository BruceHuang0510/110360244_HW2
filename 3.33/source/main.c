#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b,i,j,k;
	printf("Enter ªø");
	scanf_s("%d", &a);
	printf("Enter ¼e");
	scanf_s("%d", &b);
	for (i = 0; i <a; i++)
	{
		printf("*");
	}

	for (j = 0; j < b-2; j++)
	{
		printf("\n");
		printf("*");
		for (k = 0; k < b-2; k++)
		{
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for (i = 0; i <a; i++)
	{
		printf("*");
	}
	printf("\n\n");
}