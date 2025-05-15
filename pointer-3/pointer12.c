#include<stdio.h>
int main() {
	int a = 300;
	int* p; //포인트변수(주소)
	printf("%d", a);
	p = &a;//a 100번지=p 100번지
	//a값, &a주소
	printf("%p\n", p); //100번지(메모리주소)
	printf("%d\n", *p);//역참조
			//포인터 변수 *=> 그주소에 가서 그값을 꺼내옴
	int a = 10; //정수형 일반변수
	int* p = &a; //*의미는 포인트변수 선언
	printf("%d\n", *p); //*의미는 역참조
								//포인트변수가 가르키는 주소의 값
	int b = 5;      //정수 일반변수
	int* ptr = &b;      //*의미는 포인터변수 선언, b의 주소 대입
	*ptr = 20;      //*포인터 변수 = 값 20이 저장(역참조)
	printf("%d", b);    
	
	return 0;
}