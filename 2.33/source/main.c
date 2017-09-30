#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e;
	printf("每天行駛路程幾公里 ");
	scanf_s("%d",&a);
	printf("每加侖汽油價格 ");
	scanf_s("%d",&b);
	printf("每加侖汽油可行駛里程數 ");
	scanf_s("%d",&c);
	printf("每天的停車費 ");
	scanf_s("%d",&d);
	printf("每天的過路費 ");
	scanf_s("%d",&e);
	printf("一整天的花費總共%d\n",(a/c)*b+d+e);



	system("pause");
	return 0;
}


