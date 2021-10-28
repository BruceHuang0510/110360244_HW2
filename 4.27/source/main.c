#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	
	int i,j,k,s=0;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if (k*k == i * i + j * j)
				{
					printf("%d\t%d\t%d\n", i, j, k);
					s++;
				}

			}
		}
		
	}
	printf("%d", s);//確認總共有幾個
}