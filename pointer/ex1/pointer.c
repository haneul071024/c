#include<stdio.h>
int main() {

	int i = 10;
	int* p;//포인터 변수

	p = &i;//P는 I의 주소기억 P주소=I주소
	printf("i=%d\n", i);//값 출력 (I는 일반변수)->10
	
	*p = 20;//P는 포인터 변수에 *=>기억하고 있는 주소에 가서 그값을 의미함 그값에 20 대입
	printf("i = %d\n", i);//20출력

	int a = 10;

	int* po;
	po = &a;

	printf("%d\n", sizeof(a)); //4바이트
	printf("%d\n", sizeof(po)); //포안터 변수는 8바이트
	printf("%d\n", sizeof(&a)); //주소담음 8바이트
	printf("%d\n", sizeof(*po)); //포인트 변수에 *=>그주소에 가서 값을 가져옴 정수형은 4바이트

	return 0;
}