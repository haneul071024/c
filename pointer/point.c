#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);
void prl1(int result1);
void prl2(double result2);

int main() {
	
	
	int sel;
	int a, b;
	int res1;
	double res2;
	
		printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &a);
		printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &b);
		
		while (1) {
			printf("���ϴ� ������ �����Ͻÿ� (1:���ϱ� 2:���� 3:���ϱ� 4:������): ");
			scanf("%d", &sel);

			if (sel >= 1 && sel <= 4) {
				break;
			}
			else {
				printf("�߸��� �����Դϴ�. 1~4 ������ ���ڸ� �Է����ּ���.\n");
			}
		}
		
			if (sel == 1) res1 = sum(a, b);//�Լ�ȣ�� ������int�����ؼ� �Ƚᵵ �ȴ�
			else if (sel == 2) res1 = sub(a, b);
			else if (sel == 3) res1 = mul(a, b);
			else if (sel == 4) res2 = div(a, b);

			if (sel == 1 || sel == 2 || sel == 3)
				prl1(res1);// �Լ�ȣ�� (������ ��� ���)
			else if (sel == 4)
				prl2(res2);//�Լ�ȣ��(�Ǽ��� ��� ���)
			else printf("�Է¿���");
		
	return 0;
}
//�Ű����� �� �������
int sum(int x, int y)//�Ű������� �� (������)�� �����ϸ鼭 ������� �μ��� �Ű������� ������ ���� ���ƾ��� 
{
	int k;
	k = x + y;
	return k; //���ư��� ���� ������ �Լ��տ�int�ۼ�

}
int sub(int x, int y)
{
	int k;
	k = x - y;
	return k; 

}
int mul(int x, int y) 
{
	int k;
	k = x * y;
	return k; 

}
double div(int x, int y)
{
	double q;
	q = x / (double)y;
	return q;

}
//�߿�
void prl1(int result1)//res1�� ���������� ������ result1(�������� �޴´�)
	//��ȯ���� ���� ���ư�(void �Լ��� ó��)	
{
	printf("����� %d", result1);//��¿Ϸ�
	return; //�ٽ� �����Ծ����� �Ƚᵵ �ȴ� �� ���� ����
}
void prl2(double result2)
{
	printf("����� %.2lf", result2);
	return;
}