#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	float t, m;
	m = 5000;
	printf("�~�Q�v10%%\n");
	for (i = 1; i <= 15; i++)
	{
		t = m * (1 + 0.1);
		m = t;
		printf("��%d�~   %.2f\n", i,t);
	}
	printf("\n");
	m = 5000;
	printf("�~�Q�v10.5%%\n");
	for (i = 1; i <= 15; i++)
	{
		t = m * (1 + 0.105);
		m = t;
		printf("��%d�~   %.2f\n", i, t);
	}
	m = 5000;
	printf("�~�Q�v11%%\n");
	for (i = 1; i <= 15; i++)
	{
		t = m * (1 + 0.11);
		m = t;
		printf("��%d�~   %.2f\n", i, t);
	}
	m = 5000;
	printf("�~�Q�v11.5%%\n");
	for (i = 1; i <= 15; i++)
	{
		t = m * (1 + 0.115);
		m = t;
		printf("��%d�~   %.2f\n", i, t);
	}
	m = 5000;
	printf("�~�Q�v12%%\n");
	for (i = 1; i <= 15; i++)
	{
		t = m * (1 + 0.12);
		m = t;
		printf("��%d�~   %.2f\n", i, t);
	}
}