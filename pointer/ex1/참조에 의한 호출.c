#include<stdio.h>
void swap(int* px, int* py);
int main() {
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b); //100,200

	swap(&a, &b);//�Լ�ȣ�� (���� �ƴ� �ּҸ� ����)
	//�Լ�ȣ�� ��
	printf("a = %d b = %d\n", a, b);//200, 100
	return 0;
}
void swap(int* px, int* py) {// a�ּ�->px b�ּ� ->py

	int tmp;

	tmp = *px;//px��a�ּҸ� ����Ű�� �ִµ� �� ��(100)
	*px = *py;//py�� b�ּҸ� ����Ű�� �ִµ� �� ��(200)
					//px�� �ּ��� a�� ����
	*py = tmp;

}