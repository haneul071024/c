#include<stdio.h>

int main() {

	//int ch; //�������� ����
	//ch = getchar();//ù��° ���ڸ� �Է¹޴´�
	//putchar(ch); // ���ܵ� ������ ������������ �ƽ�Ű�ڵ尪���� ����ϱ⶧��
	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ� : ");
	gets_s(name, sizeof(name));

	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ� : ");
	gets_s(address, sizeof(address));

	puts(name);
	puts(address);

	return 0;
}