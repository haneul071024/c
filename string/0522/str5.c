#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main() {
	char key[] = "C";
	char buffer[80] = "";
	do
	{
		printf("�Ӻ���� ��ġ�� ���帹�� ���Ǵ� ����? ");
		gets(buffer);//����Ű ĥ������ -> ���� ���
	} while (strcmp(key, buffer) !=0);//���������� �ݺ�//����Ѵ�
	//strcmp�� �ι��ڿ��� ���Ͽ� ������ 0����� ����
	// �ƴϸ�0�� �ƴѰ�
	//strcpy: ���� ����
	//strcat:����
	//strcmp: ���ں�
	
	
	printf("�¾ҽ��ϴ�");

	return 0;

}