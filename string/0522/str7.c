#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h> 
int main() {
	char name[5][10];//5�� 10�� ����� �̸�->5
								//���̸��� ����9��
	char addr[5][30];//����� �ּ�->5
								//�ּҴ� ���� 29��
	char search[10];//ã���� �ϴ� ����� �̸� 9�� �̳���
								
	int i;
	//�ϱ�!!!!!!!!!!!!
	/*char a[10];
	scanf("%c", &a[0]);
	scanf("%s", a);

	char b[5][10]
	scanf("%c", &b[1][5]);
	scanf("%s", b[2]);*/

	for (i = 0; i < 5; i++) //5���Է� 0~4��° �濡 �Է�
	{
		printf("�̸� : %d ", i + 1);//i�� 0������ ��¹����� ù��° ������ 1�� ����ϱ� ���� i+1
		scanf("%s", name[i]);//�̸� 5����� �ݺ��Ͽ� �Է¹���
		printf("�ּ� : %d ", i + 1);
		scanf("%s", addr[i]);
	}
	//�˻��� �̸� �Է¹ޱ�
	printf("�˻��� �̸� �Է��ϼ���:");
	scanf("%s", search);// ã���� �ϴ� �̸��� SEARCH�� ����ִ�
	
	for ( i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("�̸�: %s �ּ� : %s\n", name[i], addr[i]);
			return 0;
		}
	}
	printf("ã�� �̸��� �����ϴ�");

	return 0;

}