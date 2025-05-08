#include<stdio.h>//헤더파일을 불러온다
int main(void)//함수시작
{
	int i = 10; //i를 정수형설정 및 10 대입
	double f = 12.3; //f를 실수형설정 및 10 대입
	int* pi = NULL; //*포인터가 가르키는 변수의 값을 반환한다
	double* pf = NULL; //포인터 선언 *는 주소 주소는 비워놔야 하기 때문에 NULL을 대입힌다

	pi = &i; //pi 에 직접주소를 불러올수 있게 대입
	pf = &f; //동일

	printf("%p%p %d\n", pi, &i, i); //주소출력
	printf("%p %p %.1lf\n", pf, &f, f);
	return 0;
}