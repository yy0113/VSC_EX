#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("�п�J�@��� \n");
	scanf_s("%d",&num);
	if (num % 2 ==0)
	{
		printf("%d������\n",num);

	}
	if (num % 2 !=0 )
	{
		printf("%d���_��\n",num);
	}
	system("pause");
	return 0;


}