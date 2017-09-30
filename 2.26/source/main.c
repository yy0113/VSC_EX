#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2;
	printf("請輸入兩個整數，中間請用空格隔開");
	scanf_s("%d%d",&num1,&num2);
	if (num1 % num2 == 0)
	{
		printf("%d為%d的倍數\n", num1, num2);
	}
	if (num1 % num2 !=0)
	{
		printf("%d不為%d的倍數\n", num1, num2);
	}
	system("pause");
	return 0;

}