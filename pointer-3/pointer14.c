#include<stdio.h>
void ap1();
void ap2();
int main() {
	ap1(); // �Լ�ȣ��
	
	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5};//5�� ������ ��, 4����Ʈ*5�� =20����Ʈ

	printf("%d\n", i[0]);
	printf("%d\n", i[1]);
	printf("%d\n", i[2]);
	printf("%p\n", i);//�迭�� ��ü�� �ּ��ǹ�
	printf("%p\n", &i[0]);//i[0]�ּ�
	printf("%p\n", &i);//i�ּ�
	//i==&i==&i[0] //�����ּ�
	//i[0] == 100
	//i[1] == 104

	printf("%p\n\n", &i[1]); //i�� 1��° ��
	printf("%p\n\n", i + 1);

	printf("%p\n\n", &i[2]); //i�� 2��° �� 
	printf("%p\n\n", i + 2);

	printf("%p\n\n", &i[3]); //i�� 3��° �� 
	printf("%p\n\n", i + 3);
}

void ap2() {
	int a[4];
	//a -> a�� ù�ּ�
	//*a -> a�� ����Ű�� ���� �� a[0]�ּҰ� ���� �װ�
	*a = 111; //a[0] =111
	*(a + 1) = 222; //a[1]=222
	*(a + 2) = 333;
	*(a + 3) = 444;


}