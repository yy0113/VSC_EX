#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c;
	printf("請輸入身高(公分)\n");
	scanf_s("%f", &a);
	printf("請輸入體重(公斤)\n");
	scanf_s("%f",&b);
	c = b / ((a / 100)*(a / 100));
	printf("BMI=%f\n",c);
	if (c<18.5)
	{
		printf("Underweight\n");
	}
	if (c>=18.5 &c<24.5)
	{
		printf("Normal\n");
	}
	if (c>=25 & c<29.9)
	{
		printf("Overweight\n");
	}
	if (c>30)
	{	
		printf("Obese\n");
	}
	system("pause");
	return 0;
}