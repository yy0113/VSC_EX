#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,num3,size;
	printf("請輸入3個數字中間用空格隔開\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	if (num1<num2)
	{
		size = num2;
		num2 = num1;
		num1 = size;
	}
	if (num1<num3)
	{
		size = num3;
		num3 = num1;
		num1 = size;
	}
	if (num2<num3)
	{
		size = num3;
		num3 = num2;
		num2 = size;
	}
	printf("Max=%d\n", num1);
	printf("Min=%d\n", num3);
	system("pause");
	return 0;
}