#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	int i;
	char fruits[3][20];//3�� 20��
	for ( i = 0; i < 3; i++)//i<3��ŭ �ݺ�
	{
		printf("���� �̸��� �Է��Ͻÿ�: ");
		scanf("%s", fruits[i]);//i�� i<3��ŭ �ݺ��Ǹ� ���̹ٲ��
	}
	for ( i = 0; i < 3; i++)
	{
		printf("%d��° ����:%s\n", i, fruits[i]);//i<3��ŭ �ݺ��Ǹ� ���� scanf�� ����� ���� ���´�
	}
	return 0;

}