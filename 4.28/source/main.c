#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b,c,d,e,f,g,i,j,k;
	float h;
	printf("��J�~��N�X:");
	scanf_s("%d", &a);
	switch (a)
	{

	case 1:
		{
			printf("�п�J�A���P�~:");
			scanf_s("%d", &b);
			printf("�A���P�~��%d", b);
			break;
		}
	case 2:
		{
			printf("�п�J�A�����~:");
			scanf_s("%d", &c);
			printf("�п�J�A���u��:");
			scanf_s("%d", &d);
			e = 40 * c + (d - 40)*1.5*c;
			f = c * d;
			if (d > 40)
			{
				printf("�A���P�~��:%d", e);
			}
			else
			{
				printf("�A���P�~��:%d", f);
			}
			break;
		}
	case 3:
		{
			printf("�п�J�A����P�P����B:");
			scanf_s("%d", &g);
			h = 250 + 0.057*g;
			printf("�A���P�~��:%.2f", h);
			break;
		}
	case 4:
		{
			printf("�п�J�A�����:");
			scanf_s("%d", &i);
			printf("�п�J�@�󪺪��B:");
			scanf_s("%d", &j);
			k = i * j;
			printf("�A���P�~��:%d", k);
			break;
		}
	}
}