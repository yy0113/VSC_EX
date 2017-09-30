#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("叫块俱计 \n");
	scanf_s("%d",&num);
	if (num % 2 ==0)
	{
		printf("%d案计\n",num);

	}
	if (num % 2 !=0 )
	{
		printf("%d计\n",num);
	}
	system("pause");
	return 0;


}