#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int  a, c;
	float b, d;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%d", &a);
	if (a != -1)
	{
		printf("Enter interest:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &c);
		d = a * b*c / 365.0;
		printf("The interest charge is $ %.2f", d);
	}
	system("pause");
	


}