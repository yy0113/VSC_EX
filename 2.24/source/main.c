#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("請輸入一整數 \n");
	scanf_s("%d",&num);
	if (num % 2 ==0)
	{
		printf("%d為偶數\n",num);

	}
	if (num % 2 !=0 )
	{
		printf("%d為奇數\n",num);
	}
	system("pause");
	return 0;


}