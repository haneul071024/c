#include<stdio.h>
void ap1();
void ap2();
int main() {
	ap1(); // 함수호출
	
	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5};//5개 정수형 방, 4바이트*5개 =20바이트

	printf("%d\n", i[0]);
	printf("%d\n", i[1]);
	printf("%d\n", i[2]);
	printf("%p\n", i);//배열명 자체는 주소의미
	printf("%p\n", &i[0]);//i[0]주소
	printf("%p\n", &i);//i주소
	//i==&i==&i[0] //같은주소
	//i[0] == 100
	//i[1] == 104

	printf("%p\n\n", &i[1]); //i의 1번째 방
	printf("%p\n\n", i + 1);

	printf("%p\n\n", &i[2]); //i의 2번째 방 
	printf("%p\n\n", i + 2);

	printf("%p\n\n", &i[3]); //i의 3번째 방 
	printf("%p\n\n", i + 3);
}

void ap2() {
	int a[4];
	//a -> a의 첫주소
	//*a -> a가 가르키는 곳의 값 a[0]주소가 가서 그값
	*a = 111; //a[0] =111
	*(a + 1) = 222; //a[1]=222
	*(a + 2) = 333;
	*(a + 3) = 444;


}