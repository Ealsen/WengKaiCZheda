#include <stdio.h>
#include <math.h>
int main()
{
	float purse = 100;
	float save = 0;
	float price = 0;
	printf("input price\n");
	scanf("%f", &price);
	save = purse-price ;
	printf("save:%f\n",save);
	system("pause");
}