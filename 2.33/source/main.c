#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e;
	printf("�C�Ѧ�p���{�X���� ");
	scanf_s("%d",&a);
	printf("�C�[�ڨT�o���� ");
	scanf_s("%d",&b);
	printf("�C�[�ڨT�o�i��p���{�� ");
	scanf_s("%d",&c);
	printf("�C�Ѫ������O ");
	scanf_s("%d",&d);
	printf("�C�Ѫ��L���O ");
	scanf_s("%d",&e);
	printf("�@��Ѫ���O�`�@%d\n",(a/c)*b+d+e);



	system("pause");
	return 0;
}


