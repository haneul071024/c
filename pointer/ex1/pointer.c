#include<stdio.h>
int main() {

	int i = 10;
	int* p;//������ ����

	p = &i;//P�� I�� �ּұ�� P�ּ�=I�ּ�
	printf("i=%d\n", i);//�� ��� (I�� �Ϲݺ���)->10
	
	*p = 20;//P�� ������ ������ *=>����ϰ� �ִ� �ּҿ� ���� �װ��� �ǹ��� �װ��� 20 ����
	printf("i = %d\n", i);//20���

	int a = 10;

	int* po;
	po = &a;

	printf("%d\n", sizeof(a)); //4����Ʈ
	printf("%d\n", sizeof(po)); //������ ������ 8����Ʈ
	printf("%d\n", sizeof(&a)); //�ּҴ��� 8����Ʈ
	printf("%d\n", sizeof(*po)); //����Ʈ ������ *=>���ּҿ� ���� ���� ������ �������� 4����Ʈ

	return 0;
}