#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b,c,d,e,f,g,i,j,k;
	float h;
	printf("輸入薪資代碼:");
	scanf_s("%d", &a);
	switch (a)
	{

	case 1:
		{
			printf("請輸入你的周薪:");
			scanf_s("%d", &b);
			printf("你的周薪為%d", b);
			break;
		}
	case 2:
		{
			printf("請輸入你的時薪:");
			scanf_s("%d", &c);
			printf("請輸入你的工時:");
			scanf_s("%d", &d);
			e = 40 * c + (d - 40)*1.5*c;
			f = c * d;
			if (d > 40)
			{
				printf("你的周薪為:%d", e);
			}
			else
			{
				printf("你的周薪為:%d", f);
			}
			break;
		}
	case 3:
		{
			printf("請輸入你的當周銷售金額:");
			scanf_s("%d", &g);
			h = 250 + 0.057*g;
			printf("你的周薪為:%.2f", h);
			break;
		}
	case 4:
		{
			printf("請輸入你的件數:");
			scanf_s("%d", &i);
			printf("請輸入一件的金額:");
			scanf_s("%d", &j);
			k = i * j;
			printf("你的周薪為:%d", k);
			break;
		}
	}
}